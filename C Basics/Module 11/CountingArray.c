#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int cnt[8] = {0};

    for (int i = 0; i < n; i++)
    {
        cnt[array[i]]++;
    }
    


    for (int i = 0; i < n; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    

    return 0;
}