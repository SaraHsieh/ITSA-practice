#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char code[10000];
    scanf("%s", code); /*input string*/
    int i;
    for(i=0; i<strlen(code); i++)
        printf("%c", code[i]-3); /*±N½s½X-3«á¦A¿é¥X*/
    printf("\n");
    return 0;
}
