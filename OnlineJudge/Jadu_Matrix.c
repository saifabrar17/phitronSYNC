#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int isJaduMatrix = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if ((i == j || i + j == n - 1) && matrix[i][j] != 1)
            {
                isJaduMatrix = 0;
                break;
            }

            if ((i != j && i + j != n - 1) && matrix[i][j] != 0)
            {
                isJaduMatrix = 0;
                break;
            }
        }
        if (!isJaduMatrix)
        {
            break;
        }
    }

    if (isJaduMatrix)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
