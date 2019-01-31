#include <stdio.h>

int main(void) {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
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
    if(max<d)
        max = d;
    printf("%d",max);
    return 0;
}