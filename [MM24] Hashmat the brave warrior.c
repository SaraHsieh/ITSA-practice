#include <stdio.h>
int main(void)
{
    long m,n;
    while(scanf("%ld%ld", &m, &n) == 2)
        printf("%ld\n", m-n>0?m-n:n-m);
    return 0;
}
