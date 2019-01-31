#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i =n;
    for(;i>0;i--){
        printf("*");
    }
    int t;
    t = n-1;
    for(;t>1;t--){
        i = n-1;
        printf("\n*");
        for(;i>1;i--){
            printf(" ");
        }
        printf("*");
    }
    i = n;
    printf("\n");
    for(;i>0;i--){
        printf("*");
    }
    return 0;
}
