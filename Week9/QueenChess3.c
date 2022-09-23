//ตารางหมากรุกขนาด 8x8 เมื่อเราวาง Queen ทั้งหมด n ตัวไปที่ตำแหน่ง x1,y1 x2,y2 ... xn,yn
//จงหาว่าจะมีช่องที่สามารถวางเบี้ยฝ่ายตรงข้ามได้โดยไม่ถูกกินโดย x เป็นแถว y เป็นหลัก (Level 5)
#include <stdio.h>
int table[8][8];
int col(int);
int row(int);
int dia(int, int);
int main()
{
  int num;
  int x, y;
  int sum = 0;
  scanf("%d", &num);
  for (int i = 0; i < num; i++)
  {
    scanf("%d %d", &x, &y);
    x--;
    y--;
    table[x][y] = 1;
  }
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (row(i) && col(j) && dia(i, j))
        sum++;
    }
  }
  printf("%d", sum);
  return 0;
}
int row(int x)
{
  for (int i = 0; i < 8; i++)
  {
    if (table[x][i] == 1)
      return 0;
  }
  return 1;
}
int col(int y)
{
  for (int i = 0; i < 8; i++)
  {
    if (table[i][y] == 1)
      return 0;
  }
  return 1;
}
int dia(int x, int y)
{
  for (int i = 0; i < 8; i++)
  {
    if (table[x + i][y + i] == 1 && x + i < 8 && y + i < 8)
      return 0;
    if (table[x - i][y - i] == 1 && x - i >= 0 && y - i >= 0)
      return 0;
    if (table[x + i][y - i] == 1 && x + i < 8 && y - i >= 0)
      return 0;
    if (table[x - i][y + i] == 1 && x - i >= 0 && y + i < 8)
      return 0;
  }
  return 1;
}
