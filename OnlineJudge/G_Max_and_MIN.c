#include <stdio.h>
#include <string.h>

int max_min(int *array, int n)
{
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("%d %d", min, max);
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
    max_min(array, n);

    return 0;
}
