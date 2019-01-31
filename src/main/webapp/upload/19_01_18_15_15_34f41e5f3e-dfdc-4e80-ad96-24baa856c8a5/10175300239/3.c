#include <stdio.h>

int main()
{
    int n,a,b,i,out;
    scanf("%d",&n);
    printf("%d",n);
    a=3;
    b=3;
    while(a<=n/2){
        out=1;
        b=n-a;
        for(i=2;i<a;i++){
            if(a%i==0){
                out=0;
                break;
            }
        }
        for(i=2;i<b;i++){
            if(b%i==0){
                out=0;
                break;
            }
        }
        if(out==1)
            printf("=%d+%d",a,b);
        a+=2;
    }
    return 0;
}