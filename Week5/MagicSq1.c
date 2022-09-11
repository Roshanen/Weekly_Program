//จงเขียนโปรแกรมเพื่อตรวจสอบว่าเป็น จตุรัสกล หรือไม่ (Level 5)
#include <stdio.h>
int sum = 0;
int size;
int row(int box[size][size], int size, int i)
{
    sum = 0;
    for (int j = 0; j < size; j++)
        sum += box[j][i];
    return sum;
}
int col(int box[size][size], int size, int i)
{
    sum = 0;
    for (int j = 0; j < size; j++)
        sum += box[i][j];
    return sum;
}
int downl(int box[size][size], int size)
{
    sum = 0;
    for (int i = 0; i < size; i++)
        sum += box[i][i];
    return sum;
}
int downr(int box[size][size], int size)
{
    sum = 0;
    for (int i = 0; i < size; i++)
        sum += box[i][size - i - 1];
    return sum;
}
void magic(int box[size][size], int size)
{
    int stat = 0;
    int check = (size * size * size + size) / 2;
    for (int i = 0; i < size; i++)
    {
        if (check == row(box, size, i))
            stat++;
        else
            break;
    }
    for (int i = 0; i < size; i++)
    {
        if (check == col(box, size, i))
            stat++;
        else
            break;
    }
    if (downl(box, size) == check)
        stat++;
    if (downr(box, size) == check)
        stat++;
    if (stat == 2 * size + 2)
        printf("Yes");
    else
        printf("No");
}
int main()
{
    scanf("%d", &size);
    int box[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            scanf("%d", &box[i][j]);
    }
    magic(box, size);
    return 0;
} 
