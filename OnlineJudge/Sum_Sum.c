#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int pos = 0, neg = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            pos += arr[i];
        }else{
            neg += arr[i];
        }
    }
    printf("%d %d", pos, neg);

    return 0;
}
