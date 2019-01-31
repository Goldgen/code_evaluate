#include<stdio.h>

main()
{
    int i,j,k=1,p,q,n;
    char t='A';
    scanf("%d",&n);
    q=n-1;
    for(i=1;i<=n;i++,t++,q--)
        {
            for(p=q;p>=1;p--)
                printf(" ");
            for(j=1;j<=i*2-1;j++)
                printf("%c",t);
                printf("\n");
        }
    for(i=n-2;i>=1;i--,t++,k++)
    {
        for(p=1;p<=k;p++)
            printf(" ");
        for(j=i*2+1;j>=1;j--)
            printf("%c",t);
            printf("\n");
    }
    for(i=n-1;i>=1;i--)
        printf(" ");
    printf("%c",t);
}