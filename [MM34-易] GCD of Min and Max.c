#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int gcd(int i, int j)
{
    if(i%j==0)
        return j;
    else
        return gcd(j, i%j);
}
int main()
{
    int ncase;
    scanf("%d", &ncase);
    while(ncase--)
    {
        int MAX=-1, min=1001, n, temp;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &temp);
            if(MAX<temp)
                MAX=temp;
            if(min>temp)
                min=temp;
        }
        printf("%d\n", gcd(MAX, min));
    }
    return 0;
}
