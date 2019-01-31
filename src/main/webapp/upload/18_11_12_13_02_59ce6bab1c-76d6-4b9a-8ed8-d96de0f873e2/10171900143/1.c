#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void m(int ,int);

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            m(j,i);
            if(i==j&&i!=n)printf("\n");
        }
    }

    return 0;
}

void m(int a, int b){
    printf(" %d * %d =%3d",a,b,a*b);
}


