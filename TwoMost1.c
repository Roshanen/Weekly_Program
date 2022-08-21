//จงเขียนโปรแกรมเพื่อรับค่าตัวเลข 3 จำนวน แล้วหาว่าจำนวนคู่ใดบวกกันแล้วได้ค่ามากที่สุด (Level 2)
#include <stdio.h>

int main()
{
    int number1, number2, number3;
    int ope1, ope2;
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2)
    {
        ope1 = number1;
        number1 = 0;
    }
    else
    {
        ope1 = number2;
        number2 = 0;
    }
    if (number2 > number3 && number2 > number1)
        ope2 = number2;
    else if (number1 > number3 && number1 > number2)
        ope2 = number1;
    else
        ope2 = number3;
    printf("%d %d", ope1, ope2);
    return 0;
}