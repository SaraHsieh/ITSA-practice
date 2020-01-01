#include <stdio.h>
#include <math.h>
int main()
{
    int ncase, width, length, height, surface, volume, a=0, b=0, i;
    double min, ratio;
    min=125000.0;
    scanf("%d",&ncase);
    for(i=1;i<=ncase;i++)
    {
        scanf("%d %d %d",&height,&width,&length);
        surface=2*(height*width+height*length+width*length);
        volume=height*width*length;
        ratio=(double)surface/(double)volume;
        if(ratio<min)
        {
            min=ratio; a=surface; b=volume;
        }
    }
    for(i=1; i<b; i++)
    {
        if(b%i==0 && a%i==0)
        {
            if(i!=1)
            {
                while(b%i==0 && a%i==0)
                {
                    b=b/i;
                    a=a/i;
                }
            }
        }
    }
    printf("%d/%d\n",a,b);
    return 0;
}
