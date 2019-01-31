#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int count=1;
    while(count<=n){
        printf("*");
        count++;
    }
    count=1;
    while(count<=n-2){
        printf("\n*");
        int i=1;
        while(i<=n-2){
            printf(" ");
            i++;
        }
        printf("*");
        count++;
    }
    count=1;
    printf("\n");
    while(count<=n){
        printf("*");
        count++;
    }
    return 0;
}
