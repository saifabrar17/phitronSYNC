#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int position;
    int value;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &position, &value);
    
    arr[position] = value;
    
     for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
