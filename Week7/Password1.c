//Password ของใครปลอดภัยที่สุดให้หาว่าใครตั้ง Password ที่ยากที่จะถูก hack จากผู้ไม่ประสงค์ดีมากที่สุด 
//ระหว่าง Kob, Romtham และ Jojo ตามลำดับ โดยมีเกณฑ์ในการตั้ง Password ที่ดีดังนี้(Level 5)
#include <stdio.h>
#include <string.h>
int az(char *);     //ตัวอักษร a-z อย่างน้อย 1 ตัว
int number(char *); //ตัวเลข 0-9 อย่างน้อย 1 ตัว
int AZ(char *);     //ตัวอักษร A-Z อย่างน้อย 1 ตัว
int sp(char *);     //ตัวอักษรพิเศษ $ หรือ # หรือ @ อย่างน้อย 1 ตัว
int len(char *);    //ความยาวไม่น้อยกว่า 6 ตัว และ ไม่มากกว่า 12 ตัว
int main()
{
  char word1[100], word2[100], word3[100];
  scanf("%[^,\n],%[^,\n],%[^\n]", word1, word2, word3);
  if (az(word1)&&number(word1)&&AZ(word1)&&sp(word1)&&len(word1))
    printf("Kob");
  else if (az(word2)&&number(word2)&&AZ(word2)&&sp(word2)&&len(word2))
    printf("Romtham");
  else if (az(word3)&&number(word3)&&AZ(word3)&&sp(word3)&&len(word3))
    printf("Jojo");
  else
    printf("None of them");
  return 0;
}
int az(char *word)
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (word[i] >= 'a' && word[i] <= 'z')
      return 1;
  }
  return 0;
}
int number(char *word)
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (word[i] >= '0' && word[i] <= '9')
      return 1;
  }
  return 0;
}
int AZ(char *word)
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (word[i] >= 'A' && word[i] <= 'Z')
      return 1;
  }
  return 0;
}
int sp(char *word)
{
  for (int i = 0; i < strlen(word); i++)
  {
    if (word[i] == '$' || word[i] == '#' || word[i] == '@')
      return 1;
  }
  return 0;
}
int len(char *word)
{
  return (strlen(word) >= 6 && strlen(word) <= 12) ? 1 : 0;
}
