#include <stdio.h>
#include <string.h>
void rotate(int* p, int n, int m)
{
    int i;
    int c[30];
    for(i=0;i<n;i++)
    {
    	c[i]=*(p+i);
	}
	for(i=n;i<2*n;i++)
    {
    	c[i]=*(p+i-n);
	}
	for(i=0;i<n;i++)
    {
		*(p+i)=c[i+n-m];
	}
}
int main()
{
    int p[20];
    int n,m,i;
    scanf("%d %d\n",&n,&m);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&p[i]);
	}
	rotate( p,  n, m);
	for(i=0;i<n;i++)
    {
    	if(i)
    	 printf(" ");
		 printf("%d",p[i]);
    }
    return 0;
}
