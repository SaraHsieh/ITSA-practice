#include <stdio.h>
int main()
{
    int ch, ra, cr, a,b,c;
    while(scanf("%d%d%d", &a,&b,&c)!=EOF)
    {
        cr=a-c;
        ra=(b-(2*c)-(8*cr))/2;
        ch=c-ra;
        if(ch<0 || ra<0 || cr<0 || a<0 ||b<0 || c<0 || b%2!=0)
        {
            printf("No solution\n");
        }
        else
        {
            printf("%d %d %d\n",ch,ra,cr);
        }
    }
    return 0;
}
