//จงเขียนโปรแกรมเพื่อหาผลรวมที่น้อยที่สุดโดยเริ่มจากจุดเริ่มต้น 99999 ในตารางขนาด n*n และขยับไปที่ตำแหน่งที่นำตัวเลขนั้นมาบวก
//โดยตัวเลขที่จะสามารถนำมาบวกได้นั้นจะต้องมาจากเลขรอบๆตำแหน่งในปัจจุบันที่ไม่เท่ากับ 0 เท่านั้น และตัวเลขแต่จะตัวจะถูกนำมารวมได้แค่ครั้งเดียว
//(โดยตัวเลขในตารางจะมีค่า < 99999) ไปเรื่อยๆจนไม่สามารถไปต่อได้จึงจะหยุดทำการบวก(รอบๆจุดปัจจุบันเป็น 0 ทั้งหมด)(Level 5) E.g.
#include <stdio.h>
#include <string.h>
int atoi(char *, int);
int main()
{
   int n = 2;
   scanf("%d", &n);
   int x, y;
   char table[1000];
   int tablei[n + 2][n + 2];           //table +border(left+right)
   int sum = 0;
   int summagic = 1;
   for (int i = 0; i < n + 2; i++)     //set tablei to 0 
   {
      for (int j = 0; j < n + 2; j++)
      {
         tablei[i][j] = 0;
      }
   }
   for (int i = 0; i < n; i++)         //loop input
   {
      for (int j = 0; j < n; j++)
      {
         scanf("%s", table);
         int l = strlen(table);
         if (table[0] == 'S')
         {
            tablei[i + 1][j + 1] = 0;
            x = i + 1;
            y = j + 1;
         }
         else if (table[0] == '-')
         {
            table[0] = '0';
            tablei[i + 1][j + 1] = -atoi(table, l);
         }
         else
            tablei[i + 1][j + 1] = atoi(table, l);
      }
   }

   while (summagic != 0)               //check around x,y
   {
      summagic = 0;
      int pol = 99999;
      int xa = x, ya = y;
      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {
            summagic += tablei[xa - 1 + i][ya - 1 + j];
            if (tablei[xa - 1 + i][ya - 1 + j] < pol)
            {
               pol = tablei[xa - 1 + i][ya - 1 + j];
               x = xa - 1 + i;
               y = ya - 1 + j;
            }
         }
      }
      sum += tablei[x][y];
      tablei[x][y] = 0;
   }
   printf("\n%d\n", sum);               //answer
   for (int i = 0; i < n + 2; i++)      //check answer table
   {
      for (int j = 0; j < n + 2; j++)
      {
         printf("%d ", tablei[i][j]);
      }
      printf("\n");
   }
   return 0;
}
int atoi(char *table, int l)            //atoi bro
{
   int sum = 0;
   for (int i = 0; i < l; i++)
   {
      sum = (sum * 10) + (table[i] - '0');
   }
   return sum;
}
