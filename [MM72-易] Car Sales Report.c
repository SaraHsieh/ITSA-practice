#include <stdio.h>
int main()
{
    int id, unit;
    float cost, sales, commission;
    while(scanf("%d %d %f", &id,&unit,&cost)==3)
    {
        sales=(float)unit*cost;
        commission=sales*0.12;
        printf("%d %d %.2f %.2f %.2f\n",id,unit,cost,sales,commission);
    }
    return 0;
}
