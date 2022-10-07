/* .- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--.--.- .-. ... - ..- ...- .-- -..- -.-- --..
.---- ..--- ...-- ....- ..... -.... --... ---.. ----. ----- */
#include <stdio.h>
int codec[36] = {8, 46, 50, 22, 2, 34, 26, 30, 6, 44, 24, 38, 12, 10, 28, 180, 8, 18, 14, 4, 16, 32, 20, 48, 52, 5492, 76, 68, 64, 62, 94, 110, 118, 122, 124};
char sheet[36] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
int bidec[26][2] = {{2, 4}, {16, 14}, {20, 10}, {8, 6}, {0, 2}, {4, 26}, {12, 2}, {0, 30}, {0, 6}, {14, 16}, {10, 4}, {8, 22}, {6, 0}, {4, 2}, {14, 0}, {52, 72}, {2, 4}, {4, 10}, {0, 14}, {2, 0}, {2, 12}, {2, 28}, {6, 8}, {18, 12}, {22, 8}, {96, 24}};
void morse_to_ch(char *morse)
{
    while (1)
    {
        char code[5];
        int dec = 0;
        int dot = 0;
        int i = 0;
        for (i = 0; i < 6; i++)
        {
            scanf("%c", &code[i]);
            if (code[i] == ' ')
                break;
            else if (code[i] == '-')
                dec++;
            else if (code[i] == '.')
                dot++;
            dec *= 2;
            dot *= 2;
        }
        for (int i = 0; i < 37; i++)
        {
            if (dec * 2 + dot == codec[i])
                printf("%c,", sheet[i]);
        }
        if (code[i] == ' ')
            break;
    }
}
void ch_to_morse(char *ch)
{
    char code[6];
    int i = 0;
    while (1)
    {
        for (i = 0; i < 6; i++)
            scanf("%c", &code[i]);
    }
}
int main()
{
    int blank = 0;
    int i = 0;
    char code[6];
    while (code[i] != ' ')
    {
        blank = 0;
        int dec = 0;
        int dot = 0;
        for (i = 0; i < 6; i++)
        {
            scanf("%c", &code[i]);
            if (code[i] == '/')
                break;
            else if (code[i] == '-')
                dec++;
            else if (code[i] == '.')
                dot++;
            dec *= 2;
            dot *= 2;
        }
        // printf("%d,", dec * 2 + dot);
        printf("{%d,%d},", dec, dot);
    }
    return 0;
}
