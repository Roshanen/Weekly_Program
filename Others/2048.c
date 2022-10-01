//เกม 2048 มีตารางขนาด 4x4 วิธีเล่นคือ จะใช้วิธีการเลื่อน โดยการเลื่อน1ครั้งจะเลื่อนทั้งกระดาน และถ้าเลขเหมือนกันจะบวกกันทันที
//โดยให้รับค่าตารางที่มีเลขมาโดยให้ 0 แทนช่องว่าง จากนั้นรับค่าการสไลด์ในทิศทางต่างๆแทนด้วย L R U D แล้วพิมพ์ค่าผลลัพธ์สุดท้ายออกมา (Level 5)

#include <stdio.h>
#include <ctype.h>
int main()
{
  int table[4][4] = {{0, 0, 0, 0},
                     {16, 0, 0, 0},
                     {4, 8, 0, 0},
                     {2, 2, 0, 0}};
  while (1)
  {
  char kb = ' ';
    for (int i = 0; i < 4; i++) // printf
    {
      for (int j = 0; j < 4; j++)
      {
        printf("%d ", table[i][j]);
      }
      printf("\n");
    }
    printf("\ninput (U,D,L,R,F to exit) : ");
    scanf(" %c", &kb);
    printf("\n");
    kb = toupper(kb);
    if (kb == 'U') // Up
    {
      for (int col = 0; col < 4; col++)
      {
        for (int cur = 0; cur < 4; cur++)
        {
          if (table[cur][col] == 0)
          {
            for (int i = cur + 1; i < 4; i++)
            {
              if (table[i][col] != 0)
              {
                table[cur][col] = table[i][col];
                table[i][col] = 0;
                break;
              }
            }
          }
          if (table[cur][col] != 0)
          {
            for (int i = cur + 1; i < 4; i++)
            {
              if (table[i][col] == table[cur][col])
              {
                table[cur][col] *= 2;
                table[i][col] = 0;
                break;
              }
              else if (table[i][col] != table[cur][col] && table[i][col] != 0)
                break;
            }
          }
        }
      }
    }
    else if (kb == 'D') // Down
    {
      for (int col = 0; col < 4; col++)
      {
        for (int cur = 3; cur >= 0; cur--)
        {
          if (table[cur][col] == 0)
          {
            for (int i = cur - 1; i >= 0; i--)
            {
              if (table[i][col] != 0)
              {
                table[cur][col] = table[i][col];
                table[i][col] = 0;
                break;
              }
            }
          }
          if (table[cur][col] != 0)
          {
            for (int i = cur - 1; i >= 0; i--)
            {
              if (table[i][col] == table[cur][col])
              {
                table[cur][col] *= 2;
                table[i][col] = 0;
                break;
              }
              else if (table[i][col] != table[cur][col] && table[i][col] != 0)
                break;
            }
          }
        }
      }
    }
    else if (kb == 'L') // Left
    {
      for (int col = 0; col < 4; col++)
      {
        for (int cur = 0; cur < 4; cur++)
        {
          if (table[col][cur] == 0)
          {
            for (int i = cur + 1; i < 4; i++)
            {
              if (table[col][i] != 0)
              {
                table[col][cur] = table[col][i];
                table[col][i] = 0;
                break;
              }
            }
          }
          if (table[col][cur] != 0)
          {
            for (int i = cur + 1; i < 4; i++)
            {
              if (table[col][i] == table[col][cur])
              {
                table[col][cur] *= 2;
                table[col][i] = 0;
                break;
              }
              else if (table[col][i] != table[col][cur] && table[col][i] != 0)
                break;
            }
          }
        }
      }
    }
    else if (kb == 'R') // Right
    {
      for (int col = 0; col < 4; col++)
      {
        for (int cur = 3; cur >= 0; cur--)
        {
          if (table[col][cur] == 0)
          {
            for (int i = cur - 1; i >= 0; i--)
            {
              if (table[col][i] != 0)
              {
                table[col][cur] = table[col][i];
                table[col][i] = 0;
                break;
              }
            }
          }
          if (table[col][cur] != 0)
          {
            for (int i = cur - 1; i >= 0; i--)
            {
              if (table[col][i] == table[col][cur])
              {
                table[col][cur] *= 2;
                table[col][i] = 0;
                break;
              }
              else if (table[col][i] != table[col][cur] && table[col][i] != 0)
                break;
            }
          }
        }
      }
    }
    else if (kb == 'F')
      return 0;
    else // Error!
      printf("invalid input!\n");
  }
  return 0;
}
