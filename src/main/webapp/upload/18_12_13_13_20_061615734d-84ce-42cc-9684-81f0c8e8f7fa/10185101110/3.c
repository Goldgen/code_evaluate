#include<stdio.h>
#include<string.h>
void itoa(char* p ,int n)
{
	if(n>0)
	{
	*p=n%10+'0';
	itoa(p+1,n/10);}
	else 
	*p='\0'; 
}
void reserve(char*p)
{
	int temp,i=0,j;
	for(j=strlen(p)-1;i<j;i++,j--)
	{
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
	}
}
int main()
{
	char a[10];
	int n;
	scanf("%d",&n);
	itoa(a,n);
	reserve(a);
	printf("%s",a);
	
}
