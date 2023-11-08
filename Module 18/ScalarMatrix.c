#include <stdio.h>

int main()
{

    int row, column;
    scanf("%d %d", &row, &column);
    int array[row][column];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d ", &array[i][j]);
        }
    }

    int flag = 1;
    if (row != column)
    {
        flag = 0;
    }
    int value = array[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            if (i == j)
            {
                if (array[i][j] != array[0][0])
                {
                    flag = 0;
                }
                continue;
            }

            if (array[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 0)
    {
        printf("Not scalar diagonal");
    }
    else
    {
        printf("Scalar");
    }

    return 0;
}