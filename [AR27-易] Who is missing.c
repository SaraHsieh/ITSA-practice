#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX 70000
int main()
{
    int num, temp, i, print=1;
    bool check[MAX];
    for(i=0;i<=MAX;i++)
        check[i]=false; /*�����]���������X*/
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        scanf("%d", &temp);
        check[temp]=true; /*���Q��J���ȳ]�����X�L*/
        if(!check[i])
        { /*�������X�L����missing��*/
            if(print)
                printf("%d", i);
            else
                printf(" %d", i);
            print=0;
            i++;
        }
    }
    printf("\n");
    return 0;
}
