#include <stdio.h>

int main()
{
    double n,sum=0;
    double m[5];
    int i=0;
    for(i=0;i<=4;i++)
    {
        scanf("%lf",&n);
        m[i]=1.0/n;
        sum+=m[i];
    }
    for(i=0;i<5;i++)
        {printf("%.2lf",m[i]);
        if(i<4)
            printf(" ");
        }
     printf("\n%.6lf",sum);
  return 0;
}
