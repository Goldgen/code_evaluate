#include<stdio.h>
void Bin(int n){
    int x;
    x=n%2;
    if(n>=2)
        Bin(n/2);
    putchar(x==0?'0':'1');
    return;
}
int main(){
    int num;
    scanf("%d",&num);
    Bin(num);
    return 0;
}
