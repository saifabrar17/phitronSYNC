#include <stdio.h>
int main()
{
    int a, b, n;

    scanf("%d %d", &a, &b);

    n = a - b;

    if (n <= 0)
    {
        printf("0\n");
    }
    else
    {
        printf("%d", n);
    }

    return 0;
}