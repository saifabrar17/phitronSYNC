#include <stdio.h>
#include <string.h>
int main()
{

    int length;
    scanf("%d", &length);
    int array[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            int temp = 0;
            if(array[i] > array[j]){
                temp= array[i];
                array[i]=array[j];
                array[j]=temp;
            }
           
        }
    }
     for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}