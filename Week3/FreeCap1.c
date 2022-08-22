//ร้านขายเครื่องดื่มมีโปรโมชั่น ถ้าดื่มเสร็จสามารถนำฝา 3 ฝาแลกขวดใหม่ได้ 1 ขวด (ขวดน้ำ 1 ขวดให้ฝา 1 ฝา
//และ หลังจากแลกแล้วผู้ขายเก็บฝากลับโดยไม่คืนให้ผู้ซื้อ) (Level 3)
#include <stdio.h>

int main()
{
    int cap, bottle;
    scanf("%d", &bottle);
    cap = bottle;
    while (cap > 2)
    {
        bottle += cap / 3;
        cap = (cap % 3) + (cap / 3);
    }
    printf("%d", bottle);
    return 0;
}
