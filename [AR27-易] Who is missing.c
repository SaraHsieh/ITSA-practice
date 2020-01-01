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
        check[i]=false; /*全部設為不曾拜訪*/
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        scanf("%d", &temp);
        check[temp]=true; /*有被輸入的值設做拜訪過*/
        if(!check[i])
        { /*不曾拜訪過的為missing的*/
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
