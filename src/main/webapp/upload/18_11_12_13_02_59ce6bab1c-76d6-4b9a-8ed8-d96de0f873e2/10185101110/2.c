#include<stdio.h>
#include<ctype.h>
int main() 
{
	void x(int);
	int b,c,flag=0;
	scanf("%d %d",&b,&c);


	{
		for(;b<=c;b++)
		if(isgraph(b) )
		{
		x(b);
		flag=1;}		
	}
	if(flag==0)
	printf("NONE");
	    
	  return 0;
}
void x(int a)
{
	int i=1;
	printf("%d",a);
	if(a<100)
	for(;i<=6;i++)
	printf(" ");
	if(a>99)
	for(;i<=5;i++)
	printf(" ");
	printf("%c\n",a);
}