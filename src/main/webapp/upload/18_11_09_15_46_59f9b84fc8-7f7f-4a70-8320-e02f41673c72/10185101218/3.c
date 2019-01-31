#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,f;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(b=a;n-b>0;b++)
            printf(" ");
        for(c=0;c<2*a-1;c++)
            printf("%c",'A'+a-1);
        printf("\n");
    }
    for(d=n+1;d<=2*n-1;d++){
        for(e=0;e<d-n;e++)
            printf(" ");
        for(f=0;f<2*(2*n-d)-1;f++)
            printf("%c",'A'+d-1);
        if(d!=2*n-1)
            printf("\n");
    }
    return 0;
}
