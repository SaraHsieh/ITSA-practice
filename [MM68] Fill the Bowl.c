#include <stdio.h>
int main()
{
    int a, b, L,i;
    while(scanf("%d %d %d",&a,&b,&L)==3)
    {
        if(a<b)
        {
            for(i=a;i>0;i--)
            {
                if(b%i==0 &&a%i==0 && i<= L)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
        else
        {
            for(i=b;i>0;i--)
            {
                if(b%i==0 && a%i==0 && i<=L)
                {
                    printf("%d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
