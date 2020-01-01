#include <stdio.h>
int main()
{
    double h, w;
    while(scanf("%lf %lf",&h,&w)==2)
    {
        double bmi;
        bmi=w/((h/100)*(h/100));
        printf("%.1lf ", bmi);
        if(bmi < 18.5)
            printf("underweight\n");
        else if(bmi < 24)
            printf("normal\n");
        else if(bmi < 27)
            printf("overweight\n");
        else if(bmi < 30)
            printf("mild obesity\n");
        else if(bmi < 35)
            printf("moderate obesity\n");
        else
            printf("severe obesity\n");
    }
    return 0;
}
