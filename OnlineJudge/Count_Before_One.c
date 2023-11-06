#include <stdio.h>
#include <stdlib.h>

int count_before_one(int array[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (array[i] == 1)
        {
            break;
        }
        count++;
    }

    return count;
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
    count_before_one(array, n);
    printf("%d", count_before_one(array, n));
    return 0;
}
