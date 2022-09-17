//จงเขียนโปรแกรมเพื่อหาผลรวมของเส้นทางที่มากที่สุดของแต่ละเส้นทางในพีระมิดต่อไปนี้ (Level 5)
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int tree[n][n];
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      scanf("%d", &tree[i][j]);
  }
  int bi = 0;
  for (int i = 0; i < n; i++)
  {
    sum += (tree[i][bi] > tree[i][bi + 1]) ? tree[i][bi] : tree[i][bi + 1];
    bi = (tree[i][bi] > tree[i][bi + 1]) ? bi : bi + 1;
  }
  printf("%d",sum);
}
