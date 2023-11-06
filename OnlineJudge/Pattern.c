#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int maxRow = n * 2 - 1;

    for (int i = 1; i <= maxRow; i++)
    {
        int space = abs(n - i);
        int character = maxRow - 2 * space;

        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < character; j++)
        {
            if (i % 2 == 0)
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}