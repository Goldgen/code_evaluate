#include <stdio.h>

int main()
{
    int n=0;
    int i=1;
    int j;
    scanf("%d",&n);
    while(i<=(n+1)/2-1){
        j=1;
        while(j<=n/2-i+1){
            printf(" ");
            j++;
        }
        printf("*");
        j=1;
        while(j<=n-(n/2-i+1)*2-2){
            printf(" ");
            j++;
        }
        if(i==1)
            printf("\n");
        else
            printf("*\n");
        i++;
    }
    j=1;
    while(j<=n){
        printf("*");
        j++;
    }
    return 0;
}