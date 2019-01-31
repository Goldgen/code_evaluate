#include<stdio.h>
char * i2a(char* p,int n)
{
    char *t=p;
    if((n/10)!=0)
        t=i2a(t,n/10);
    *t=n%10+'0';
    ++t;
    *t='\0';
    return t;
}
int main()
{
    int i;
    scanf("%d",&i);
    char p[80];
    i2a(p,i);
    puts(p);
    return 0;
}
