int main()
{
	int n,i,fa=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	fa=(fa*i)%20181111;
	printf("%d",fa);
}