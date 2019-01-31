#include <stdio.h>
#include <stdlib.h>
int transBi(int);
int main()
{
    int decimal=0;
    scanf("%d",&decimal);
    transBi(decimal);
    return 0;
}
int transBi(int decimal){
    if(decimal>1){
        transBi(decimal/2);
        printf("%d",decimal%2);
    }
    else if(decimal==1){
        printf("%d",decimal);
        return decimal;
    }
}
