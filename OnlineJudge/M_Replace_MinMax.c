#include <stdio.h>

int main()
{
    int len;
    scanf("%d", &len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 0; i < len; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == smallest)
        {
            arr[i] = largest;
        }
        else if (arr[i] == largest)
        {
            arr[i] = smallest;
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}