//บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n (Level 4)
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int matrix1[x][y], matrix2[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            scanf("%d", &matrix1[i][j]);
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
            scanf("%d", &matrix2[i][j]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("\n");
        for (int j = 0; j < y; j++)
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
    }
    return 0;
}
