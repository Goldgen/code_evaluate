#include<stdio.h>
#include<math.h>
int main (void)
{
   int x,y,z=0;
	scanf("%d",&x);
	for(int i=2;i<=sqrt(x);i++)
	{
		y=x%i;
		if(y==0)
		{
		z=1;
		break;
		}
	}

	  if(z==0)
        printf("It is a prime number.\n",x);
      if(z==1)
        printf("It's not a prime number.\n",x);
    return 0;

}