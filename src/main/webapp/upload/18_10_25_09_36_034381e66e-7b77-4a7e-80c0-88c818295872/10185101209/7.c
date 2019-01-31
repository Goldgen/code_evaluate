#include<stdio.h>

int main()
{
    int n,m;

    scanf("%d",&m);
    n=(m+1)/2;
    for(int i=0;i<n-1;i++){
        for(int u=0;u<n-i-1;u++){
            printf(" ");
        }
        printf("*");
        if(i==0){
            printf("\n");
            continue;
        }
        for(int u=0;u<2*i-1;u++)
            printf(" ");
        printf("*\n");
    }
    for(int i=0;i<2*n-1;i++)
        printf("*");
    return 0;
}
