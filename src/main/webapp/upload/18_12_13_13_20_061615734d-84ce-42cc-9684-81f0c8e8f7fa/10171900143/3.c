#include <stdio.h>
#include <stdlib.h>
char* i2a(char* p,int n);

int main()
{
    int a;
    scanf("%d",&a);
    char s[100];
    printf("%s",i2a(s,a));


  return 0;

}
char* i2a(char* p,int n){
    int len;
    int m=n;
    for(len=0;m>0;m/=10)len++;
    p+=len;*(p--)=0;
    while(n>0){
        *(p--)=n%10+48;
        n/=10;
    }p++;
    return p;
}