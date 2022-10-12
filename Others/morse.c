/* .- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- -..- -.-- --..
.---- ..--- ...-- ....- ..... -.... --... ---.. ----. ----- */
#include <stdio.h>
int codec[36][2] = {{2, 1}, {1, 14}, {5, 10}, {1, 6}, {0, 1}, {4, 11}, {3, 4}, {0, 15}, {0, 3}, {14, 1}, {5, 2}, {2, 13}, {3, 0}, {1, 2}, {7, 0}, {6, 9}, {11, 4}, {2, 5}, {0, 7}, {1, 0}, {4, 3}, {8, 7}, {6, 1}, {9, 6}, {13, 2}, {3, 12}, {30, 1}, {28, 3}, {24, 7}, {16, 15}, {0, 31}, {1, 30}, {3, 28}, {7, 24}, {15, 16}, {31, 0}};
char ch[36] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
int dec = 0;
int dot = 0;
void codectoch(int dec, int dot)
{
    for (int i = 0; i < 36; i++)
    {
        if (dec == codec[i][0] && dot == codec[i][1])
        {
            printf("%c", ch[i]);
            break;
        }
    }
}
void morse_codec(char *word)
{
    int others = 0;
    int a = 0;
    while (others < 2)
    {
        if (word[a] != '-' && word[a] != '.')
        {
            dec = 0;
            dot = 0;
            for (int i = 1; i < 6; i++)
            {
                if (word[a - i] != '-' && word[a - i] != '.')
                    break;
                else if (word[a - i] == '-')
                {
                    dec++;
                    others = 0;
                }
                else if (word[a - i] == '.')
                {
                    dot++;
                    others = 0;
                }
                dec *= 2;
                dot *= 2;
            }
            // printf("{%d,%d},", dec / 2, dot / 2);
            codectoch(dec/2, dot/2);
            others++;
        }
        a++;
    }
}
void codectomorse(int dec, int dot)
{
    while (dec > 0 || dot > 0)
    {
        if (dec % 2 != 0)
        {
            printf("-");
            dec--;
        }
        else if (dot % 2 != 0)
        {
            printf(".");
            dot--;
        }
        dec /= 2;
        dot /= 2;
    }
}
void ch_codec(char *word)
{
    int others = 0;
    int a = 0;
    while (others < 2)
    {
        if ((word[a] >= 'A' && word[a] <= 'Z') || (word[a] >= '0' && word[a] <= '9'))
        {
            for (int i = 0; i < 36; i++)
            {
                if (ch[i] == word[a])
                {
                    dec = codec[i][0];
                    dot = codec[i][1];
                    codectomorse(dec, dot);
                    printf("\\");
                    break;
                }
            }
        }
        else
            others++;
        a++;
    }
}
int main()
{
    char word[300];
    scanf("%[^\n]", word);
    if (word[0] != '.' && word[0] != '-')
        ch_codec(word);
    else
        morse_codec(word);
    return 0;
}
