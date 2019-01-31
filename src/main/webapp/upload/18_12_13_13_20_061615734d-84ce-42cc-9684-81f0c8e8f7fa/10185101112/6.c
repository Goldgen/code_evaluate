#include <stdio.h>
#include <string.h>

void rotate(int* p, int n, int m);
int str[100];
int main(){
	int m,n;
	scanf("%d %d",&n,&m);
	int i=0;
	for (;i<n;i++)
	{
		scanf("%d",&str[i]);
	}
	int* p=str;
	rotate(p,n,m);

    return 0;
}
void rotate(int* p, int n, int m){
	int ch[10]={0};
	int* p1=ch;
	int j=0;
	int k=m;
	while(k--)
	{
		*p1=*(p+n-m+j);
		p1++;
		j++;
	}
	int t=n-m+1;
	while(t--)
	{
		*p1=*p;
		p1++;
		p++;
	 }
	 printf("%d",ch[0]);
	for(int i=1;i<n;i++)
	{
		printf(" %d",ch[i]);
	}
	
}