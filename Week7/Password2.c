// Password ของใครปลอดภัยที่สุดให้หาว่าใครตั้ง Password ที่ยากที่จะถูก hack จากผู้ไม่ประสงค์ดีมากที่สุด
//ระหว่าง Kob, Romtham และ Jojo ตามลำดับ โดยมีเกณฑ์ในการตั้ง Password ที่ดีดังนี้(Level 5)
#include <stdio.h>
#include <string.h>
int check(char*);
int main()
{
  char word1[100], word2[100], word3[100];
  scanf("%[^,\n],%[^,\n],%[^\n]", word1, word2, word3);
  if (check(word1))
  printf("%s (Kob)",word1);
  else if (check(word2))
  printf("%s (Romtham)",word2);
  else if (check(word3))
  printf("%s (Jojo)",word3);
  else
  printf("None of them");
  return 0;
}
int check(char* word)
{
  int az = 0, AZ = 0, number = 0, sp = 0, len = 0;
  for (int i = 0; i < strlen(word); i++)
  {
    az += (word[i] >= 'a' && word[i] <= 'z') ? 1 : 0;
    number += (word[i] >= '0' && word[i] <= '9') ? 1 : 0;
    AZ += (word[i] >= 'A' && word[i] <= 'Z') ? 1 : 0;
    sp += (word[i] == '$' || word[i] == '#' || word[i] == '@') ? 1 : 0;
  }
  len += (strlen(word) >= 6 && strlen(word) <= 12) ? 1 : 0;
  return (az > 0 && AZ > 0 && number > 0 && sp > 0 && len > 0) ? 1 : 0;
}
