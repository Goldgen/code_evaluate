int main()
{
	double sum=0.0;
	for(long long int a=1,b=2,cont=0,t;cont<50;t=b,b+=a,a=t,cont++)
	/*printf("%d %d\n",a,b);*/
	sum+=b*1.0/a;
	printf("%.2f",sum);
}

