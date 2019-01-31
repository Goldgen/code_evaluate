#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX=20181111;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        if(i<=n){
            for(j=1;j<=n-i;j++) printf(" ");
            for(j=1;j<=2*i-1;j++) printf("%c",'A'+i-1);
        }
        else {
            for(j=1;j<=i-n;j++) printf(" ");
            for(j=1;j<=2*(2*n-1-i)+1;j++) printf("%c",'A'+i-1);
        }
        if(i<2*n-1)printf("\n");
    }
    return 0;
}
