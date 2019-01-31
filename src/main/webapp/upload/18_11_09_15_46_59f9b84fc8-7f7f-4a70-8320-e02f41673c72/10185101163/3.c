#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(m=n-i;m>0;m--) printf(" ");
        for(j=1;j<=2*i-1;j++) printf("%c",64+i);
        printf("\n");
    }
    for(i=n-1;i>0;i--){
        for(m=1;m<=n-i;m++) printf(" ");
        for(j=2*i-1;j>0;j--) printf("%c",64+2*n-i);
        if(i>1) printf("\n");
    }
    return 0;
}
