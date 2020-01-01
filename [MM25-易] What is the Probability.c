#include <stdio.h>
#include <math.h>
int main()
{
    int ncase;
    while (scanf("%d",&ncase)==1)
    {
        int m, n;
        double pro;

        while (ncase--)
        {
            scanf("%d %lf %d",&m,&pro,&n);

            if (pro < 0.00001)
                printf("0.00\n");
            else
            {
                double ans;
                ans = pow(1 - pro, n - 1) * pro;
                ans = ans/(1 - pow(1 - pro, m));
                printf("%.4lf\n", ans);
            }
        }
    }
    return 0;
}
