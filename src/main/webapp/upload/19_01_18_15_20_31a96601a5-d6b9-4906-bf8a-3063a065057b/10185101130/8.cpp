#include<stdio.h>

int main(void)
{
	int a,b,c,max,min;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		max=a;
		min=b;
	}
	else
	{
		max=b;
		min=a;
	}
    if(max>c)
      if(c>min)
        printf("%d",c);
      else
        printf("%d",min);
    else
      printf("%d",max);
    return 0;

} 
 
 