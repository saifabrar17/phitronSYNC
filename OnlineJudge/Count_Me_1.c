#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int first = 0;
    int second = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            first++;
        }
        else if (a[i] % 3 == 0)
        {
            second++;
        }
    }

    printf("%d %d", first, second);
    return 0;
}