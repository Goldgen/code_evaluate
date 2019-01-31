#include <stdio.h>
int main()
{
int i,n;
double a[10],b;
n=5;
int index=1;
for(i=0;i<n;i++)
scanf("%lf",&a[i]);
for(i=0;i<n;i++)
{     
      if (index==1)
      {
          printf("%.2lf",1.0/a[i]);
          index++;
      }
      else
     {
         printf(" %.2lf",1.0/a[i]);
        }
}
b=0.0;
for(i=0;i<n;i++)
b+=1.0/a[i];
printf("\n%.6lf",b);
return 0;
}
