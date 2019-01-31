#include<stdio.h> 

int main()
{
	double a[5],b=0,c[5];
	for(int i=0;i<5;i++)
	{
		scanf("%lf",&a[i]);
	}
	for(int x=0;x<5;x++)
	{
		c[x]=1.0/a[x];
	} 
	for(int j=0;j<5;j++)
	{
		if(j==4) printf("%.2f\n",c[j]);
		else printf("%.2f ",c[j]);
		b+=c[j];
	}
	printf("%.6f",b);
	return 0;
}