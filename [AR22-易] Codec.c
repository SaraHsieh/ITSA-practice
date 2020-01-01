#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char code[10000];
    scanf("%s", code); /*input string*/
    int i;
    for(i=0; i<strlen(code); i++)
        printf("%c", code[i]-3); /*將編碼-3後再輸出*/
    printf("\n");
    return 0;
}
