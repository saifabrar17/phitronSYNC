#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1;
    int s = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int e = 0; e < k; e++)
        {
            printf("*");
        }
        s--;
        k = k + 2;
        printf("\n");
    }

    return 0;
}