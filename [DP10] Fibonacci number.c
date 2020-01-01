#include <stdio.h>

int main()
{
    long long num[50]={0};
    int n, i, ncase;
    num[1]=num[2]=1;
    for(i=3; i<=45; i++)  /*事先算好1~45的值*/
        num[i]=num[i-2]+num[i-1];
    scanf("%d", &ncase);
    while(ncase--)
    {
        scanf("%d", &n);
        printf("%lld\n", num[n]);
    }
    return 0;
}
