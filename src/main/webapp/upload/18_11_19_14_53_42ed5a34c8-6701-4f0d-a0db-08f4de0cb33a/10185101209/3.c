#include <stdio.h>

int num[100000]={0}, i=0;
int function(void){
    int n;

    scanf("%d",&n);
    if(n>0){
        return n;
    }
    i--;
}

int main()
{
    int pre=0;
    for(pre=i; i<1000000; i++, pre++){
        num[i] = function();
        if(pre!=i)
            break;
    }
    for(; i>=0; i--){
        printf("%d",num[i]);
        if(i != 0)
            printf(" ");
    }
    return 0;
}