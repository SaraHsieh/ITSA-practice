#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char code[1000];
    while(fgets(code, 10000, stdin))
    {
        int i;
        for(i=0; i<strlen(code); i++)
	{
            if(isalpha(code[i]))
            { /*判斷是不是英文字母，是的話進入迴圈，並把編碼+13*/
                if((code[i]>='A' && code[i]+13<='Z') || (code[i]>='a' && code[i]+13<='z'))
                    printf("%c", code[i]+13);
                else
                    printf("%c", code[i]+13-26);
            }
            else
                printf("%c", code[i]);
        }
    }
    return 0;
}
