#include <stdio.h>
char* i2a(char* p,int n){
    int bit=0;
    if(n>9){
        bit=n%10;
        p=i2a(p,n/10);
        *p=bit+'0';
    }
    else{
        *p=n+'0';
    }
    p+=1;
    return p;
}
int main(void){
    int i=0;
    char p[50] = {'\0'};
    scanf("%d",&i);
    i2a(p,i);
    printf("%s",p);
    return 0;
}