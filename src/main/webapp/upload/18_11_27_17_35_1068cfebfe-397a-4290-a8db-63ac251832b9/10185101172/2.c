#include <stdio.h>

int main()
{
    double m[100],sum;
    int i=0;
    for(i=0;i<100;i++)
        m[i]=1.0/(2*(i+1)*(2*(i+1)+1)*2*(i+2));
    for(i=0;i<100;i++)
        {
            if(i%2==0)
                sum+=m[i];
            else
                sum-=m[i];
        }
     printf("%.4lf",sum*4.0+3.0);
  return 0;
}
