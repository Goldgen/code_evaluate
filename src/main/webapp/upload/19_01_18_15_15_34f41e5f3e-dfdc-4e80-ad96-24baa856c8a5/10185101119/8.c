#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,w,b;
    long long N;
    scanf("%d%d",&n,&m);
    N=n;
    for(int i=9;;i--)
    {
    	if(n-pow(10,i)>=0)
    	{
    		w=i+1;
    		break;
		}
	}
	if(m>w)
	{
	 b=m-w;
	while(b>w)
		b=b-w;
	}
	else
    b=m;
    for(int i=1;i<=b;i++)
    {
    	int mowei;
    	mowei=N%10;
    	N=N/10+mowei*pow(10,w-1);
	}
	printf("%d %d",w,N);
	return 0;
}