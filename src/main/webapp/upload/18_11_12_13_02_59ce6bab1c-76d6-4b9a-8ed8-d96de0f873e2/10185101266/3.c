#include<stdio.h>
int main()
{
	int m,n,i;
	scanf("%d",&m);
	if(m==2)
		printf("It's a prime number.");
	else
   {
	    for(n=2;n<=m-1;n++)
	    {
		  i=m%n;
		  if(i==0)
		  {  printf("It's not a prime number.");
		     break;}
		  else
		  {	 printf("It is a prime number.");
		     break;}
        }
	}
    return 0;
}
