int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++)
    {
        if(a==i)
		printf("%d ",b);
        printf("%d",arr[i]);
		if(i<n-1)
			printf(" ");
    }
	if(a==n)
        printf(" %d",b);
    return 0;
}