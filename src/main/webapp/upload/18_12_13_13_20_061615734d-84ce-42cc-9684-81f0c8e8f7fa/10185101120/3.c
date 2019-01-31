#include<stdio.h>
char x[]="0123456789";
static int i=-1;
void pl(char a[],int n)
{
	i++;
	if(n<10){
		a[i]=x[n];
	}
	else{
		a[i]=x[n%10];
		pl (a,n/10);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	char a[10];
	pl(a,n);
	for (;i>=0;i--){
		printf ("%c",a[i]);
	}
}