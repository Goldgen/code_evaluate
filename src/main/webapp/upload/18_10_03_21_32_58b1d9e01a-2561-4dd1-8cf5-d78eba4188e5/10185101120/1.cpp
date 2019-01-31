#include<stdio.h>
#include<math.h>
int main()
{
	int d,p,r,m;
	scanf("%d %d %d",&d,&p,&r);
	m=log(p/(p-d*(r/100.0)))/log((r/100.0)+1);
	m+=1;
    printf("%d",m);
    return 0;
}