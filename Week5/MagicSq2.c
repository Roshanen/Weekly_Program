//จงเขียนโปรแกรมเพื่อตรวจสอบว่าเป็น จตุรัสกล หรือไม่ (Level 5)
#include <stdio.h>
int main()
{
    int size;
    int downr = 0, downl = 0;
    int checkD = 0;
    int checkL = 0;
    scanf("%d", &size);
    int box[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            scanf("%d", &box[i][j]);
    }
    for (int i = 0; i < size; i++)
    {
        downl += box[i][i];
        downr += box[i][size - i - 1];
    }
    if (downl != downr)
    {
        printf("No");
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        int row = 0, col = 0;
        for (int j = 0; j < size; j++)
        {
            row += box[i][j];
            col += box[j][i];
        }
        if(col != row && col != downl)
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}
