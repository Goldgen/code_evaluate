#include <stdio.h>
int main(){
    int a,b,c,mid;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(b>c)
            mid=b;
        else
            mid=a>c?c:a;
            }
    else{
        if(a>c)
            mid=a;
        else
            mid=b>c?c:b;
    }
    printf("%d",mid);
}