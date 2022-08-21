//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)
#include <stdio.h>

int main()
{
    int number1, number2, number3;
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 + number2 > number1 + number3 && number1 + number2 > number2 + number3)
        printf("%d %d", number1, number2);
    else if (number1 + number3 > number1 + number2 && number1 + number3 > number2 + number3)
        printf("%d %d", number1, number3);
    else
        printf("%d %d", number2, number3);
    return 0;
}
