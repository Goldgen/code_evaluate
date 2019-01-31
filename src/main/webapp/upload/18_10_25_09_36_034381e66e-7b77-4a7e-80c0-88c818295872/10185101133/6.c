#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int p=0;
    if(n)
        printf("*");
    while(p<n-2)
    {
        printf("\n*");
        i=0;
        while(i<p){
            printf(" ");
            i++;}
        printf("*");
        p++;
    }
    printf("\n");
    p=0;
    while(p<n){
        printf("*");
        p++;}
    return 0;
}
