#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int array[3];
    array[0] = a;
    array[1] = b;
    array[2] = c;
    int temp = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 2; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int k = 0; k < 3; k++)
    {
        printf("%d ", array[k]);
    }

    return 0;
}
