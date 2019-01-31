void maopai(int a[],int n){
    if(n==1)
        return;
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            int t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    maopai(a,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int m=1;m<=n;m++)
        scanf("%d",&a[m]);
    maopai(a,n);
    printf("%d",a[1]);
    for(int t=2;t<=n;t++)
        printf(" %d",a[t]);
}