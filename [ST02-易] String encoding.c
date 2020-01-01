#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000];
    while(scanf("%s", s)==1)
    {
        int lens, num=0, i;
        lens=strlen(s);
        for(i=0; i<lens; i++)
            num = num*26+s[i]-'A'+1;
        printf("%d\n", num);
    }
    return 0;
}