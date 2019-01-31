#include <stdio.h>
#include <string.h>

char* i2a(char* p,int n)
{
    static int i = 0;
    if(n >= 10){
        *p = n%10 + '0';
        i++;
        i2a(p-1,n/10);
    }
    else
        *p = n + '0';
    return p-i;
}

int main(void)
{
    int i = 0;
    int temp = 0;
    int js = 0;
    scanf("%d",&i);
    temp = i;
    char num[20] = "\0";
    for(;temp > 0;js++)
        temp /= 10;
    printf("%s",i2a(num+js,i));
    return 0;
}
