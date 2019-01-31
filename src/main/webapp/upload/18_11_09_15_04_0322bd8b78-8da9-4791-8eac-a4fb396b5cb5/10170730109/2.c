#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,i=1,x=1,p=1;
    scanf("%d",&n);
    for(x=1;x<n;x++){
        for(i=1;i<=2*n-2*x;i++){
            printf(" ");
        }
        for(p=1;p<x;p++){
            printf("%d+",p);
        }
        printf("%d=%d",p,p);
        for(p=p-1;p>1;p--){
            printf("+%d",p);
        }
        if(p>0){
            printf("+%d\n",p);
        }
        else
            printf("\n");

    }
    for(p=1;p<x;p++){
        printf("%d+",p);
    }
    printf("%d=%d",p,p);
    for(p=p-1;p>1;p--){
        printf("+%d",p);
    }
    if(p>0){
        printf("+%d",p);
    }
    return 0;
}

