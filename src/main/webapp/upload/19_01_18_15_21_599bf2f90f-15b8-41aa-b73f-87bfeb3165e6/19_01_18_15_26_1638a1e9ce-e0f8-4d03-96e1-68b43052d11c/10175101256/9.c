#include <stdio.h>
#include <math.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x)
    x/=abs(x);
    printf("%d",x);
}