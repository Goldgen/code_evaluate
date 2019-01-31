#include <stdio.h>

int main()
{
    int n,i,j;
    i=1;
    scanf("%d",&n);
    printf("*");
    while(i<=n-2){
        printf("\n*");
        j=1;
        while(j<i){
            printf(" ");
            j++;
        }
        printf("*");
        i++;
    }
    j=1;
    printf("\n");
    while(j<=n){
        printf("*");
        j++;
    }
    return 0;
}