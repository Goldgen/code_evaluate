#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    if(n){                                                      //打印第一行
        while(i<(n-1)/2){
        printf(" ");i++;}
    printf("*\n");i=0;
    }
  while(i<(n-3)/2){
        int p=0;
        while(p<(n-1)/2-1-i){
        printf(" ");
        p++;
        }
        printf("*");p=0;
        while(p<2*i+1){
            printf(" ");
            p++;
        }
        printf("*\n");
    i++;
    }
    int p2=0;
    while(p2<n){                                                  //打印最后一行
        printf("*");
        p2++;}
    return 0;
}