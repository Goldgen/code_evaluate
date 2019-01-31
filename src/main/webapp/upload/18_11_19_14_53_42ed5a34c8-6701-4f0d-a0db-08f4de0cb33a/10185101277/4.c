#include<stdio.h>
void tr10to2(int m){
    if(m==0||m==1){
        printf("%d",m);
    }
    else{
        tr10to2(m>>1);
        printf("%d",m%2);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    tr10to2(n);
    return 0;
}