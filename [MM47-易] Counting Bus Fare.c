#include <stdio.h>
int main()
{
    int adult,ap,child,cp,senior,sp,sum;
    scanf("%d %d\t %d %d \t%d %d",&adult,&ap,&child,&cp,&senior,&sp);
    sum=adult*ap+child*cp+senior*sp;
    printf("%d\n",sum);
    return 0;
}
