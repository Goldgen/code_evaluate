#include<stdio.h>
#include<string.h>
int main()
{
 double a[5];
 double sum=0;
 double av=0;
 int i;
 for(i=0;i<5;i++)
 {
   scanf("%lf",&a[i]);
 }
 for(i=0;i<5;i++)
{
	sum+=a[i];
}
 av=sum/5;
 printf("%.1lf",av);
}