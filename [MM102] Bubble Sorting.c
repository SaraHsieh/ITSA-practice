#include<stdio.h>
int main()
{
    int num[50], n, temp,i, j;
    while (scanf("%d", &n)==1)
    {
        if(n==0)    break;
        for(i=0; i<n; i++)
            scanf("%d", &(num[i]));
        for(i=0; i<n-1; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(num[i]<num[j])
                {
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(i=0; i<n; i++)
            printf("%d %d\n", i+1, num[i]);
    }
}
