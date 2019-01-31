#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    for(j=n-i;j>=1;j--)printf("  ");
    for(a=1;a<=i;a++){
        printf("%d",a);
        if(a<i) printf("+");
    }
    printf("=");
    for(b=i;b>=1;b--){
        printf("%d",b);
        if(b>1) printf("+");
    }
    if(i<n) printf("\n");}
    return 0;
}
