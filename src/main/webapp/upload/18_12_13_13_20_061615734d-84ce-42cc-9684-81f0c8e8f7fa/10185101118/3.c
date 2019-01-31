#include<stdio.h>
int i=0;
char a[9];
char *i2a(char *p,int n)
{
    do
    {
        a[i++]=n%10+'0';
        n/=10;
    }while (n);
    return a;
}
int main()
{
    char *p;
    int t;
    scanf("%d",&t);
    p=i2a(p,t)+i-1;
    for (int v=0; v<i; v++)
        printf("%c",*p--);
    return 0;
}
