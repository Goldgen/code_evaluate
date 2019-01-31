#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	int a,b,c,d=15,e=20,f=100;
	for(;;)
	{
	    a = rand()%d;
        b = rand()%e;
	    c = rand()%f;
	    if((a+b+c==100)&&7*a+5*b+c/3==100&&c%3==0)
	    break;
	}
	printf("%d %d %d",a,b,c);
}