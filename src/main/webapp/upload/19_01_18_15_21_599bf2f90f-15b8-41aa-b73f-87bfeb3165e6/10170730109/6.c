#include <stdio.h>

int main(void) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max = 0;
    if(a>b){
        max = a;
        if(max<c){
            max = c;
        }
    }
    else{
        max = b;
        if(c>b){
            max = c;
        }
    }
    printf("%d",max);
    return 0;
}