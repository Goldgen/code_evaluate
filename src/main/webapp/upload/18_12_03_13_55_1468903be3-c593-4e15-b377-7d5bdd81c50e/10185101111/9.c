int main()
{
    char a[81],b[81];
    gets(a);
    scanf("%s",b);
    int m=strlen(a);
    int n=strlen(b);
    int cont=0;
    int x;
    for(int i=0;i<m+1-n;i++){
        int limit=1;
        for(int t=0;t<n;t++)
        if(a[i+t]!=b[t]){
            limit=0;
            break;
        }
        if(limit)
            cont++;
        if(limit&&cont==1)
        x=i;
    }
    if(cont==0)
    printf("%s: 0 time(s), first at -1",b);
    else
    printf("%s: %d time(s), first at %d",b,cont,x);
}