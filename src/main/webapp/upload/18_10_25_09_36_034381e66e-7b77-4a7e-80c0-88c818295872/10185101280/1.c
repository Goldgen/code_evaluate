
#include<stdio.h>
int main()
{
    double height=100,sum;
    int n;
    for(n=1;n<=10;n++)
    {
      height=height/2;
        sum=2*height+sum;

    }
    sum=sum+100-height*2;

 printf("%.3lf %.3lf",sum,height);
    return 0;
}
