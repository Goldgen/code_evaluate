int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        a[i]=i;
    printf("{}\n");
    for(int m=0;m<n;m++){
        printf("{%d}",a[m]);
}
}