#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,a,b,c;
scanf("%d",&n);
printf("{}");
for(c=0;c<n;c++)
{
printf("\n{%d}",c);
for(b=c;b>0;b--)
{
for(a=0;a<b;a++)
{
printf("\n{");
printf("%d,",a);
for(i=b;i<c;i++)
printf("%d,",i);
printf("%d}",c);
}
}
}return 0;}