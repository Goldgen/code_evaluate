#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int n;
    scanf("%d",&n);
    int a=1;
    int count=0;
    int x;


    while(a<=n){
        x=n&a;
        if(x!=0){
            count++;
        }
        a=a<<1;
    }
    printf("%d",count);
    return 0;
}
