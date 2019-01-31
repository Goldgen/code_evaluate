#include <stdio.h>

char* i2a(char* p,int n);

int main()
{
    int i;
    scanf("%d",&i);
    char number[20];
    char *num;
    num=&number;
    i2a(num,i);
    printf("%s",number);
    return 0;
}
char* i2a(char* p,int n){
    if(n/10!=0){
        p=i2a(p,n/10);
    }
    *p=n%10+'0';
    p++;
    *p='\0';
    return p;
}
