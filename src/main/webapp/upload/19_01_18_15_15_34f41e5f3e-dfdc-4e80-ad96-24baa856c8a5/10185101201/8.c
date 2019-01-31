#include <stdio.h>

int main()
{
    int m,n,k,t,i,s,l=1,j=0;
    scanf("%d %d",&n,&m);
    for(i=1;(n-i)>=0;j++)
        i=i*10;
    printf("%d ",j);
    for (s=1;s<=j-1;s++)
        l=l*10;
	while(m>=j)
	{
		m=m-j;
	}
    for(k=1;k<=m;k++)
    {
        t=n%10;
        n=(n-t)/10.0+t*l;
    }
    printf("%d",n);
}