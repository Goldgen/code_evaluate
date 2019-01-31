#include <stdio.h>

#include<math.h>
int main()
{
float a,b,x;
	scanf("%f%f",&a,&b);
		  if(a-b>=0)
		  x=sqrt(a-b);
		  else x=sqrt(b-a);
		  printf("%.8f%.8f%.3f",a,b,x,);
    return 0;
}
