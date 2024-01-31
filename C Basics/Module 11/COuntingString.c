#include <stdio.h>
#include <string.h>
int main()
{

    char string[100];
    scanf("%s", string);

    int cnt[26] = {0};

    for (int i = 0; i < strlen(string); i++)
    {
        int value = string[i] - 97;
        cnt[value]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}