//จงเขียนฟังก์ชัน sqrt โดยไม่ใช้ไลบรารี math.h (Level 5)
#include <stdio.h>
int main()
{
  float n = 0;
  float a = 0, b = 0;
  float answer = 0;
  scanf("%f", &n);
  while (a * a < n)
    a++;
  b = a - 1;
  if (a * a - n < n - b * b)
    answer = a + (n - a * a)/ (2 * a);
  else
    answer = b + (n - b * b)/ (2 * b);
  printf("%f", answer);
  return 0;
}
