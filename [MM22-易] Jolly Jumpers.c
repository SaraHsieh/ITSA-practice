#include <stdio.h>
int main()
{
    int count[3010]={0}, num[3010], absolute, list, flag=0, i;
    scanf("%d", &list);
    for(i=0; i<list; i++)
        scanf("%d", num+i);
    for(i=0; i<list-1; i++)
    {
        absolute=(num[i]>num[i+1]) ? num[i]-num[i+1] : num[i+1]-num[i];
        if(absolute<list)
            count[absolute]++;
        else
            break;
    }
    for(i=1; i<list; i++)
    {
        if(count[i]==0)
	{
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not jolly\n");
    else
        printf("Jolly\n");
    return 0;
}