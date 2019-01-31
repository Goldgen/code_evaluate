#include <stdio.h>
#include <stdlib.h>
int main()
{
   
    double s = 100;
    double t = 100;

    for (int i = 1; i <= 10; i++)
    {
        if(i == 1)
            continue;
        else
        {
            t = t/2;
            s += t*2;
        }

    }
            printf("%.3lf %.3lf",s,t/2);

    return 0;
}
