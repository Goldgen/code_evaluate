#include <stdio.h>
int main(){
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
            max=a;
        else
            max=b>c?b:c;
    }
    else{
        if(b>c)
            max=b;
        else
            max=c;
            }
        printf("%d",max);
}