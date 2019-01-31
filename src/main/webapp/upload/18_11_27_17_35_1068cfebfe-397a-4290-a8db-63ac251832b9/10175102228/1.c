#include<stdio.h>
#include<stdlib.h>
#define N 1000
int main()
{ double a[N],sum=0.0;
   int i=0;
   double n;
 while(scanf("%lf",&n)!=EOF)
   { a[i]=1.0/n;
      sum+=a[i++];
    }
    int j;
    printf("%.2f",a[0]);
    for(j=1;j<i;j++)
    printf(" %.2f",a[j]);
    printf("\n%.6f",sum);
    return 0;

}
