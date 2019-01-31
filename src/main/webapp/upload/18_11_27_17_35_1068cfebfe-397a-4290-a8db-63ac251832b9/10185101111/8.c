int main()
{
    int n;
    int cont=1,limit=1;
    scanf("%d",&n);
    int a[n+1];
    a[n+1]='a';
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int m=1;m<n;m++){
        if(a[m]==a[0])
            cont++;
        else
            break;
    }
    for(int t=cont+1;t<=n;t++){
        if(a[t]==a[t-1])
            limit++;
        else{
            if(limit>cont)
                cont=limit;
            limit=1;
        }
    }
    printf("%d",cont);
}