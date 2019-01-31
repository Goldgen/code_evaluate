#include<stdio.h>
#include<stdlib.h>
int main()
{  double hight=100.0;
    double h1=hight/2,s1;
    int i;
    s1=100;
    for(i=1;i<10;i++)
        { s1=s1+h1*2;
          h1=h1/2;
         }
     printf("%.3lf %.3lf",s1,h1);
     return 0;
}
