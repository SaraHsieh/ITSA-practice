#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    long long int cal=1;
    scanf("%d", &n);
    while(scanf("%d", &n)==1)
    {
        for(i=1;i<=n;i++)
            cal=cal*i;
        printf("%d\n",cal);
        cal=1;
    }
    return 0;
}
