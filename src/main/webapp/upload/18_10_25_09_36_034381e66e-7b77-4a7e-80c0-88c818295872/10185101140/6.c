#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int i=3;
    int m=1;
    int s=1;
    printf("*\n**\n");
    while (i<=n-1){
        printf("*");
        while(m<=i-2){
            printf(" ");
            m++;
        }
        m = 1;
        printf("*\n");
        i++;
    }
    while (s<=n){
        printf("*");
        s++;
    }
    return 0;
}
