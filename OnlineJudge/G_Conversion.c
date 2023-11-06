#include <stdio.h>
#include <ctype.h>
int main()
{

    char inputString[100001];
    scanf("%s", inputString);

    for (int i = 0; inputString[i] != '\0'; i++)
    {
        if (inputString[i] == ',')
        {
            putchar(' ');
        }
        else if (islower(inputString[i]))
        {
            putchar(toupper(inputString[i]));
        }
        else if (isupper(inputString[i]))
        {
            putchar(tolower(inputString[i]));
        }
        else
        {
            putchar(inputString[i]);
        }
    }

    return 0;
}