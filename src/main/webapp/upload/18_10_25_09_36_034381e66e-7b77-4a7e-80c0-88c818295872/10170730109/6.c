#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    int l=2;
    printf("*");
        printf("\n**\n");
    for(l=3;l<n;l++){
        printf("*");
        for(i=1;i<l-1;i++){
            printf(" ");
        }
        printf("*\n");
    }
    i=0;
    for(i=0;i<n;i++){
        printf("*");
    }
    return 0;
}
