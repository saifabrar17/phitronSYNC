#include <stdio.h>
#include <stdlib.h>
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
        int v = k;
        for (int x = 1; x <= k; x++)
        {
            printf("%d", v);
            v--;
        }

        s--;
        k++;
        printf("\n");
    }

    return 0;
}