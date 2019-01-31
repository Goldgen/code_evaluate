int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int index,number;
    scanf("%d %d",&index,&number);
    for(int m=n;m>index;m--)
        a[m]=a[m-1];
    a[index]=number;
    for(int t=0;t<n;t++)
        printf("%d ",a[t]);
    printf("%d",a[n]);
}