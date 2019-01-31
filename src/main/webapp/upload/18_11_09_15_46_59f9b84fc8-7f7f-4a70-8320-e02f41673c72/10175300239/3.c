#include <stdio.h>

int main()
{
    int n,i,j;
    char a='A';
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=0;j<n-i;j++)
            printf(" ");
        for(j=0;j<2*i-1;j++)
            printf("%c",a);
        printf("\n");
        a+=1;
    }
    for(i=n-1;i>0;i--){
        for(j=0;j<n-i;j++)
            printf(" ");
        for(j=0;j<2*i-1;j++)
            printf("%c",a);
        if(i!=1)
            printf("\n");
        a+=1;
    }
    return 0;
}