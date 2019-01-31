int main()
{
    int n;
    int cont=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int number;
    scanf("%d",&number);
    for(int m=0;m<n;m++){
        if(a[m]==number){
            cont++;
            if(cont==1)
                printf("%d",m);
            else
                printf(" %d",m);
        }
    }
    if(cont==0)
        printf("ERROR");
}
