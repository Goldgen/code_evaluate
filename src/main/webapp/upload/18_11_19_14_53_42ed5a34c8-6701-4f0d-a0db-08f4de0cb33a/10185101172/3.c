
int main()
{
    int n,i,count=1;
    int a[1000];
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {   a[i]=n;
        count++;
        scanf(" %d",&n);
    }
    printf("%d",a[count-2]);
    for(i=count-3;i>=0;i--)
        printf(" %d",a[i]);
}