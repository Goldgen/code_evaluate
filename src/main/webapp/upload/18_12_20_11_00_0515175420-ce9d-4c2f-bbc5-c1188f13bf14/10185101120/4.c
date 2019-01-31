#include<stdio.h>
int i=0,flag=0;
char c='a';
void dg(char a[])
{
	if(c!='?'&&flag==0){
		c=getchar();
		a[i]=c;
		i++;
		dg(a);
	}
	else{
		if(flag==0){
			i-=2;
		}
		flag=1;
		printf("%c",a[i]);
		i--;
		if(i>=0){
			dg(a);
		}
	}
}
int main()
{
	char a[100];
	dg(a);
}