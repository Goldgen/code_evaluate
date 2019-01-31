#include<stdio.h>
int main()
{
    int a[100],b[100],c=0,i,j=0;
	long long int m,n;
    scanf("%lld %lld",&n,&m);
    
    for(int e=n;e>0;e/=10)
        {
           c=c+1;
        }
    printf("%d ",c);
    
    

    for(i=c-1;i>=0;--i)
    {
        a[i]=n%10;
        n=n/10;
    }
    m=m%c;
	for(i=c-m;i<c;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<c-m;i++)
	{
		b[j]=a[i];
		j++;
	}
	for(i=0;i<j;++i)
        printf("%d",b[i]);
	return 0;
}
