#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     for (int i = n - 1; i >= 0; i--) {
        if (i % 2 == 1) { // Check if the index is odd
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
