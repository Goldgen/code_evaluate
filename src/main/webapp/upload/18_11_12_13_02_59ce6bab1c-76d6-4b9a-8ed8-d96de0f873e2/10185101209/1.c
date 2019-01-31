#include <stdio.h>

void function(int a, int b){
    printf(" %d * %d = %2d",a,b,a*b);
}

int main()
{
    int i=1, j=1, n=0;

    scanf(" %d",&n);
    for(; i<=n; i++){
        for(j=1; j<=i; j++)
            function(j,i);
        printf("\n");
    }
}