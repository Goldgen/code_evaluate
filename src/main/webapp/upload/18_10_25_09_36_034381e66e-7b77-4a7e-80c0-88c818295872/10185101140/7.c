int main(void)
{
    int n;
    scanf("%d",&n);
    int i=1;
    int m=3;
    int s=1;

    while (i<=(n-1)/2){
        printf(" ");
        i++;
    }
    printf("*\n");
    i=1;

    while ((n-m)/2>=1){
        while (i<=(n-m)/2){
            printf(" ");
            i++;//最终i-1即左侧空格的数量
        }
        printf("*");
        while (s<=(n-i*2)){
            printf(" ");
            s++;
        }
        printf("*\n");

        i=1;
        m+=2;
        s=1;
    }

    while (i<=n){
        printf("*");
        i++;
    }
    return 0;
}
