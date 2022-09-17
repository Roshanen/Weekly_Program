//จงเขียนโปรแกรมเพื่อหาผลรวมของเส้นทางที่มากที่สุดของแต่ละเส้นทางในพีระมิดต่อไปนี้ (Level 5)
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int tree[n][n];
  int sum = 0;
  int bi = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      scanf("%d", &tree[i][j]);
    int a = tree[i][bi] + sum, b = tree[i][bi + 1] + sum;
    sum = (a > b) ? a : b;
    bi = (a > b) ? bi : bi + 1;
  }
  printf("%d", sum);
  return 0;
}
