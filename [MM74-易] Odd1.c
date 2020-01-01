#include <stdio.h>
int main()
{
    int a, b, i, sum;
    while(scanf("%d%d",&a,&b)==2)
    {
        sum=0;
        for(i=a;i<=b;i++)
        {
            if(i%2!= 0)
                sum=sum+i;
        }
        printf("%d\n",sum);
    }
    return 0;
}
