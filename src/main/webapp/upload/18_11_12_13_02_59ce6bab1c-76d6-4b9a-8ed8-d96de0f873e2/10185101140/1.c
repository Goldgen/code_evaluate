#include <stdio.h>
#include <stdlib.h>

int multiply(int a,int b);

int main(void)
{
    int n;
    scanf("%d",&n);
    int i;int j;
    for(i=1;i<=n;++i){
        for(j=1;j<=i;++j){
            printf(" %d * %d = %2d",j,i,multiply(j,i));
        }
        if(i<n) printf("\n");
    }
    return 0;
}

int multiply(int a,int b){
    int c;
    c=a*b;
    return c;
}
