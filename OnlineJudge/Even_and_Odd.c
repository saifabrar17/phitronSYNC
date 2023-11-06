#include <stdio.h>

void odd_even(int *array, int n)
{
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {

        if (array[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
 
}

int main()
{

    int n;
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    odd_even(array, n);

    return 0;
}
