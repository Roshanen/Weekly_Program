//จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 5)
#include <stdio.h>
int main()
{
  float n = 0;
  float x = 0;
  scanf("%f", &n);
  x = n;
  for (int i = 0; i < 10; i++) //delta ~ f'10(n)
  {
    x = (x + n / x) / 2;
  }
  printf("%f",x);
  return 0;
}
