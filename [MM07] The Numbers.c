#include <stdio.h>
#include <string.h>
int main()
{
    int tar, num, count=0;
    scanf("%d%d", &num, &tar);
    while(tar>9)
    {
        if(tar%100==num)
            count++;
        tar=tar/10;
    }
    printf("%d\n", count);
    return 0;
}
