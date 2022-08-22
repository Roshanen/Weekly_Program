//ร้านขายเครื่องดื่มมีโปรโมชั่น ถ้าดื่มเสร็จสามารถนำฝา 3 ฝาแลกขวดใหม่ได้ 1 ขวด (ขวดน้ำ 1 ขวดให้ฝา 1 ฝา
//และ หลังจากแลกแล้วผู้ขายเก็บฝากลับโดยไม่คืนให้ผู้ซื้อ) (Level 3)
#include <stdio.h>

int main()
{
    int bottle;
    scanf("%d", &bottle);
    for (int i = 3; i <= bottle; i += 3)
    {
        bottle += 1;
    }
    printf("%d", bottle);
    return 0;
}