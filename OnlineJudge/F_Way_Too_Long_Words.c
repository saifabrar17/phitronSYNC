#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {
        char word[100];
        int count = 0;
        scanf("%s", word);
        for (int i = 0; word[i] != '\0'; i++)
        {
            count++;
        }
        if (count > 10)
        {
            printf("%c%d%c\n", word[0], count - 2, word[count - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }

    return 0;
}
