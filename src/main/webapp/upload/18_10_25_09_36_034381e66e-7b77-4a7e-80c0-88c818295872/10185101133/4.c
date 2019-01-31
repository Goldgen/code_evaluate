#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    while(i<n){
        printf("*");
        i++;
    }
    i=0;
    while(i<n-2){
        printf("\n*");
        int m=0;
            while(m<n-2){
                printf(" ");
                m++;
            }
        printf("*");
        i++;
    }
    i=0;
    printf("\n*");
    while(i<n-1){
        printf("*");
        i++;
    }
    return 0;
}
