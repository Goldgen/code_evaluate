#include<stdio.h>
int F(int a){
	int y,b=0;
	for(y=2;y<=a;y++)
	{
		if(a%y==0&&y!=a){
			b=1;
			break;
		}
		else if(a%y!=0||y==a) b=0;
	}
	return b;
}

int main()
{
	int x;
	scanf("%d",&x);
	if(x==1) printf("It's not a prime number.");
	else if(x==2) printf("It is a prime number.");
	else{
		if(F(x)==1) printf("It's not a prime number.");
		else if(F(x)==0) printf("It is a prime number.");
	}
	return 0;
}