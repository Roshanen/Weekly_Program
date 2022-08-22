//บวกเมทริกซ์ 2 เมทริกซ์ มิติ m × n (Level 4)
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int size = x * y;
    int matrix[2 * size];
    for (int i = 0; i < 2 * size; i++)
    {
        if (i < size)
            scanf("%d", &matrix[i]);
        else
        {
            scanf("%d", &matrix[i]);
            matrix[i - size] += matrix[i];
        }
    }
    for (int i = 0; i < size; i += 3)
    {
        printf("\n");
        printf("%d %d %d ", matrix[i], matrix[i + 1], matrix[i + 2]);
    }
    return 0;
}