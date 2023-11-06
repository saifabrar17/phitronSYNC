#include <stdio.h>

int main()
{

    char string[100000];
    scanf("%s", string);
    int consonants = 0;
    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u')
        {
            consonants++;
        }
        i++;
    }
    printf("%d", consonants);
    return 0;
}