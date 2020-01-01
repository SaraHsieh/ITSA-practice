#include <stdio.h>

int main()
{
    int num ,power;
    scanf("%d", &num);
    while(scanf("%d",&num)==1)
    {
        int a=2;
        for (;num>=a;a++)
        {
            power=0;
            while (num%a==0)
            {
                num=num/a;
                power++;
            }
            if (power>0)
            {
                printf("%d",a);
                if (power>1)
                    printf("^%d",power);
                if (num>1)
                    printf("*");
                else
                    printf("\n");
            }
        }
    }
    return 0;
}
