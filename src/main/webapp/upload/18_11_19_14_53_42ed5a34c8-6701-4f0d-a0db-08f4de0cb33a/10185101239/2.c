#include <stdio.h>
#include <stdlib.h>
int digui(int a)
{
if (a==0) 
	return 0;

    return a%10+digui(a/10);
}
int main()
{int a;
 scanf("%d",&a);
printf("%d",digui(a)); 
return 0;
}