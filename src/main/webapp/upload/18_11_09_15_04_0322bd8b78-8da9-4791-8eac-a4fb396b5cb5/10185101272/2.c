#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX=20181111;
int main()
{
    int n,i,j,f;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            f=0;
        for(j=1;j<=2*n-2*i;j++) printf(" ");
        for(j=1;j<=i;j++){
            if(f) printf("+");
            printf("%d",j);
            f=1;
        }

        printf("=");
        f=0;
        for(j=0;j<i;j++){
            if(f) printf("+");
            printf("%d",i-j);
            f=1;
        }

        if(i<n)printf("\n");

    }
    return 0;
}
