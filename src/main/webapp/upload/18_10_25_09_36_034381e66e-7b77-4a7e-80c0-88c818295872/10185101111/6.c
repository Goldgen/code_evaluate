int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("*");
        if(i==0){
            printf("\n");
            continue;
        }if(i==n-1){
            for(int t=1;t<=n-1;t++)printf("*");
            break;
        }
        for(int m=1;m<=i-1;m++)printf(" ");
        printf("*");
        printf("\n");

    }

}