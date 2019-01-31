#include <stdio.h>
int main()
{
int a=1;
int c=0,d=0;
while(a<=100)
{
	if(a%2==0)
      d+=a;
    else
      c+=a;
	  a++;
}
printf("%d %d",c,d);
return 0;}
