#include <stdio.h>

int main()
{
    int eye, mouth, body;
    int doll1 = 0;
    int doll2 = 0;
    int doll3 = 0;
    scanf("%d %d %d", &eye, &mouth, &body);

    // running test case 3
    if (eye >= 1 && mouth >= 1 && body >= 1)
    {
        for (int i = eye; i >= 1 && mouth >= 1 && body >= 1; i--)
        {
            eye = eye - 1;
            mouth = mouth - 1;
            body = body - 1;
            doll1++;
        }
        // printf("d1 %d\n", doll1);
    }
    // printf("Remain 1 = %d %d %d\n", eye, mouth, body);
    // running test case 2
    if (eye >= 2 && mouth >= 1 && body >= 1)
    {
        for (int i = eye; i >= 2 && mouth >= 1 && body >= 1; i = i - 2)
        {
            eye = eye - 2;
            mouth = mouth - 1;
            body = body - 1;
            doll2++;
        }
        // printf("d2 %d\n", doll2);
    }
    // printf("Remain 2 = %d %d %d\n", eye, mouth, body);
    // running test case 1
    if (eye >= 2 && body >= 1)
    {
        for (int i = eye; i >= 2 && body >= 1; i = i - 2)
        {
            eye = eye - 2;
            body = body - 1;
            doll3++;
        }
        // printf("d3 %d\n", doll3);
    }
    int total;

    total = doll1 + doll2 + doll3;
    printf("%d", total);
    // printf("%d %d %d", eye, mouth, body);
    return 0;
}