#include<stdio.h> 
#include<math.h>
int main(void)
{
	int d,p,R;
	int M;				//M???????????? 
	float m,r;			 //m??????? 
	scanf("%d %d %d",&d,&p,&R);
	r=R*1.0/100;
	m=log(p/(p-d*r))/log(1+r);
	M=(int)(m+0.5) ;
	printf("%d",M);
	return 0;
}