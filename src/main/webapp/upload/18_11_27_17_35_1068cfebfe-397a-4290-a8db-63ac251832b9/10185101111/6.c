int main()
{
    int n;
    int cont=0,limit=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int number;
    scanf("%d",&number);
    for(int m=0;m<n;m++){
        if(a[m]==number){
            a[m]='a';
            limit=0;
            break;
        }
    }
    for(int t=0;t<n;t++){
        if(!isalpha(a[t])&&!limit){
            cont++;
            if(cont==1)
                printf("%d",a[t]);
            else
                printf(" %d",a[t]);
        }
    }
    if(limit)
        printf("ERROR");
}