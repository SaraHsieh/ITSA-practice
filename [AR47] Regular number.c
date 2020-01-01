#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main()
{
    int num;
    scanf("%d", &num);
    while(num!=1)
    { /*分別除2、3、5(質數)*/
        if(num%2)   break;
        else    num=num/2;
    }
    while(num!=1)
    {
        if(num%3)   break;
        else    num=num/3;
    }
    while(num!=1)
    {
        if(num%5)   break;
        else    num=num/5;
    }
    if(num!=1) /*如果最後除完的結果為1，代表這個數字只由2、3、5相乘而得，為*/
        printf("Irregular number!\n");
    else
        printf("Regular number!\n");
    return 0;
}
