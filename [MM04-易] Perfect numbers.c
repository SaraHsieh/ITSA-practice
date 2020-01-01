#include <stdio.h>
int main()
{
    long long int perfect[7] =
    {6, 28, 496, 8128, 33550336,8589869056,137438691328};

    int ncase,i;
    scanf("%d",&ncase);
    while(ncase--)
    {
        long long int num;
        scanf("%lld",&num);
        for(i = 0; i < 7; i++)
        {
            if(num%perfect[i]==0)
                num=num/perfect[i];
        }
        if(num==1)
            printf("perfect\n");
        else
            printf("nonperfect\n");
    }
    return 0;
}
