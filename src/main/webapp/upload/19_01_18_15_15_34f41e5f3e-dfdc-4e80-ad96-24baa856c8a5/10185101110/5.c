#include<stdio.h>
int main()
{ int a,b=0;
for(a=1;a <= 100 ; a += 2 )
{
	b=b+a;
}
printf("%d ",b);
b=0;
for(a=2;a <= 100 ; a += 2 )
{
	b=b+a;
}
printf("%d",b);


return 0;
 } 