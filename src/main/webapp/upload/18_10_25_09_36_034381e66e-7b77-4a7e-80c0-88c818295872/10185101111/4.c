#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int b=n-2;
    for(int i=1;i<=n;i++){
        printf("*");
    }printf("\n");
    for(int m=1;m<=n-2;m++){
            b=n-2;
        printf("*");
        while(b!=0){
            printf(" ");
            b--;
        }printf("*");
        printf("\n");
    }for(int c=1;c<=n;c++){
        printf("*");
    }
}