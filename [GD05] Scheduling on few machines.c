#include <stdio.h>
#include <stdlib.h>
#define N 3000

int main()
{
    int job, machine, n, time[N]={0}, i, j, min, MAX;
    scanf("%d%d", &job, &machine);
    for(i=0; i<job; i++)
    {
        scanf("%d", &n);
        for(min=0, j=1; j<machine; j++)
            if(time[j]<time[min])   min=j;
        time[min]=n+time[min];
    }
    for(MAX=0, i=1; i<machine; i++)
        if (time[MAX]<time[i]) MAX=i;
    printf("%d\n", time[MAX]);
}
