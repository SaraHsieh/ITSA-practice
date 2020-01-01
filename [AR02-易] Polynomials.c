#include <stdio.h>
#define MAX 1000
int main()
{
    int coe[3];
    scanf("%d%d%d", coe+2, coe+1, coe);
    int temp[MAX], ans[MAX], power, highest, i, j, k;
    scanf("%d", &power);
    temp[0]=1;
    highest=0;
    for(i=0; i<power; i++)
    {  /*乘power次方次*/
        for(j=0; j<=highest+2; j++)
            ans[j]=0;
        for(j=0; j<=highest; j++)   //temp
            for(k=0; k<3; k++)  //coef
                 ans[j+k] = ans[j+k] + temp[j]*coe[k];    /* [] means the power */
        for(j=0; j<=highest+2; j++)
            temp[j]=ans[j]; //將這輪的答案存到temp，以便下次繼續相乘
        highest=highest+2;
    }
    for(i=highest; i>=0; i--)
    {
        printf("%d", ans[i]);
        if(i)
            printf(" ");
    }
    printf("\n");

    return 0;
}
