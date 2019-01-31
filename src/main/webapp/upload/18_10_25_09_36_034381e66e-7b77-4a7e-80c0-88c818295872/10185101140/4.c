#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int i = 1;
    while (i<=n){
        printf("\*");
        i++;
    }
    printf("\n");
    int m = 1;
    int t = 1;
    while (m<=(n-2)){
        printf("\*");
        while (t<=(n-2)){
            printf(" ");
            t++;
        }
        t = 1;
        printf("\*\n");
        m++;
    }
    int s =1;
    while (s<=n){
        printf("\*");
        s++;
    }
    return 0;
}