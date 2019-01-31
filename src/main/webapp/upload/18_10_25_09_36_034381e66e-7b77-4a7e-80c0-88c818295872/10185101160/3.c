#include<stdio.h>
#include<string.h>
int main()
{
 int n;
 int i=0;
 double s=1;
 scanf("%d",&n);
 for(i=1;i<n+1;i++)
 {
   s=s*i;
 }
 printf("%.0lf",s);
}