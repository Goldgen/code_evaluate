#include <stdio.h>
#include <stdlib.h>

char* i2a(char *p,int n){
    if(n/10==0){
        *p=n%10+'0';
        printf("%c",*p);
        return p;}
    i2a(p++,n/10);
    *p=n%10+'0';
    printf("%c",*p);
    return p;
}

int main()
{
    int n;
    char a[10000];
    char *p=a;
    scanf("%d",&n);
    i2a(p,n);
    return 0;
}
