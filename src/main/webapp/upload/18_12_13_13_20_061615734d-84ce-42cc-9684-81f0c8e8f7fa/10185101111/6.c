int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m];
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
    int *pa=a;
    for(int t=1;t<=n;t++){
        int r=*(pa+m-1);
        for(int q=m-1;q>0;q--)
            *(pa+q)=*(pa+q-1);
        *pa=r;
    }
    printf("%d",*pa);
    for(int p=1;p<m;p++)
        printf(" %d",*(pa+p));
}
