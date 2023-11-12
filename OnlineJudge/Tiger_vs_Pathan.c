#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        char s[100001];
        scanf("%d", &n);
        scanf("%s", s);

        int tigerWin = 0;
        int pathanWin = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tigerWin++;
            }
            else if (s[i] == 'P')
            {
                pathanWin++;
            }
        }
        if (tigerWin > pathanWin)
        {
            printf("Tiger\n");
        }
        else if (pathanWin > tigerWin)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}
