#include <stdio.h>
#include <stdlib.h>

void multiply(int a);
int main()
{
    int n;
    scanf("%d",&n);
    multiply(n);
    return 0;
}
void multiply(int a){
    int i,j;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++)
            printf(" %d * %d =%3d",j,i,i*j);
        printf("\n");
    }
    return;
}
