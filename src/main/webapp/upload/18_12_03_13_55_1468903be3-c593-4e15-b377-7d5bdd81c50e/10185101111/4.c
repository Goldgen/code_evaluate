int main()
{
   int m,n;
   scanf("%d %d",&m,&n);
   int a[m][n];
   for(int i=0;i<m;i++)
    for(int t=0;t<n;t++)
    scanf("%d",&a[i][t]);
   for(int x=0;x<n;x++){
    for(int y=0;y<m;y++){
        if(y==0)
        printf("%d",a[y][x]);
        else
            printf(" %d",a[y][x]);
    }
    printf("\n");
   }
}