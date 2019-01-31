#include <stdio.h>
#include <math.h>
int main(){
    char a=1,b=0;
    while(a>b){
        a++;
        b++;
    }
    int c=0,d=0;
    int i=sizeof(c);
    c=pow(2,8*i);
    d=c-1;
    printf("%d\n%d\n%d\n%d",b,a,d,c);
    return 0;
}