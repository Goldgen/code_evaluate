#include <stdio.h>
#include <stdlib.h>

double cost(double a,double b,double c,double d)
{
    return a*b*c*d/12;
}

int main()
{
    char x;
    double w,h,f,q;
    double j=0;
    scanf("%c",&x);
    while(x!='T')
        {
        scanf("%lf%lf%lf%lf",&q,&w,&h,&f);
        double m=0;
        if(x=='P')
        {
            m=0.89*cost(w,h,f,q);
         printf("%.0f %.0f*%.0f*%.0f Pine, Cost: $%.2f\n",q,w,h,f,0.89*cost(w,h,f,q));
        }
        if(x=='F')
        {
            m=1.09*cost(w,h,f,q);
         printf("%.0f %.0f*%.0f*%.0f Fire, Cost: $%.2f\n",q,w,h,f,1.09*cost(w,h,f,q));
        }
        if(x=='C')
        {
            m=2.26*cost(w,h,f,q);
         printf("%.0f %.0f*%.0f*%.0f Cedar, Cost: $%.2f\n",q,w,h,f,2.26*cost(w,h,f,q));
        }
        if(x=='M')
        {
            m=4.50*cost(w,h,f,q);
         printf("%.0f %.0f*%.0f*%.0f Maple, Cost: $%.2f\n",q,w,h,f,4.50*cost(w,h,f,q));
        }
        if(x=='O')
        {
            m=3.10*cost(w,h,f,q);
         printf("%.0f %.0f*%.0f*%.0f Oak, Cost: $%.2f\n",q,w,h,f,3.10*cost(w,h,f,q));
        }
        j=j+m;
        scanf("%c",&x);
        }
    if(x=='T')
    printf("Total cost: $%.2f",j);

    return 0;
}