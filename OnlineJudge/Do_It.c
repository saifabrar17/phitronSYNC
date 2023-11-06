#include <stdio.h>

int main()
{

    int n, num;
    scanf("%d %d", &n, &num);
    
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= num; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    

    return 0;
}