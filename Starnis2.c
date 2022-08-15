/* 20. จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์
วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา (Level 1)*/

#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);
    for (int i = 0; i < number; i++)
        printf("*");
    return 0;
}