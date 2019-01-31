#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{

        int d = 0;
        int p = 0;
        float r = 0.0;
        float r2 = 0;
        double m = 0;
        double n = 0;
        scanf("%d",&d);
        scanf("%d",&p);
        scanf("%f",&r);
        r2=r/100;

        m=log(p/(p-d*r2))/log(1+r2);

        n=(int)((m*10)) %10;


        if(n>=5)
            m=(int)m+1;
        else
            m=(int)m;
        printf("%.0lf",m);


    return 0;
}
