int main()
{
    int i,j,m,n,p,q=0,r=-1;
    char a[100];
    char b[100];
    gets(a);
    gets(b);
    m=strlen(a);
    n=strlen(b);
    for(i=0;i<m;i++)
    {
        p=0;
        for(j=0;j<n;j++)
        {
            if(a[i+j]!=b[j])
               p=1;
        }
        if(p==0)
            q++;
        if(q==1&&p==0)
            r=i;
    }
        printf("%s: %d time(s), first at %d",b,q,r);
    return 0;
}