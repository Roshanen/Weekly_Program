//ตารางหมากรุกขนาด 8x8 เมื่อเราวาง Queen ทั้งหมด n ตัวไปที่ตำแหน่ง x1,y1 x2,y2 ... xn,yn 
//จงหาว่าจะมีช่องที่สามารถวางเบี้ยฝ่ายตรงข้ามได้โดยไม่ถูกกินโดย x เป็นแถว y เป็นหลัก (Level 5)
#include <stdio.h>
#include <string.h>
int main()
{
  char table[8][8];
  memset(table, 1, 64);
  int number;
  int x, y;
  int sum = 0;
  scanf("%d", &number);
  for (int i = 0; i < number; i++)
  {
    scanf("%d %d", &x, &y);
    x--;
    y--;
    for (int j = 0; j < 8; j++)
    {
      table[x][j] = 0;
      table[j][y] = 0;
      if (x + j < 8 && y + j < 8)
        table[x + j][y + j] = 0;
      if (x - j > -1 && y - j > -1)
        table[x - j][y - j] = 0;
      if (x - j > -1 && y + j < 8)
        table[x - j][y + j] = 0;
      if (x + j < 8 && y - j > -1)
        table[x + j][y - j] = 0;
    }
  }
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      //printf("%d ",table[i][j]);    //check table with this!
      sum += table[i][j];
    }
    //printf("\n");                   //next line
  }
  printf("%d", sum);
  return 0;
}
