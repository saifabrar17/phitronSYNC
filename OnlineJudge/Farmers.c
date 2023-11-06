#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int pd = (m1 * d) / (m1 + m2);
        int res = d - pd;
        printf("%d\n", res);
    }

    return 0;
}

//solved by moon