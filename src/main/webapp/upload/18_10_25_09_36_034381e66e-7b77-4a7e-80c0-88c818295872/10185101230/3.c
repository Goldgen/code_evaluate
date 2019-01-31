#include <stdio.h>
int main(void)
{
int n,i;
double sum=1;
scanf("%d",&n);
if (n>=0 && n<20)
{for(i=1;i<n;i++,sum=sum*i);
printf("%.0f",sum);}
else
return 0;
}
