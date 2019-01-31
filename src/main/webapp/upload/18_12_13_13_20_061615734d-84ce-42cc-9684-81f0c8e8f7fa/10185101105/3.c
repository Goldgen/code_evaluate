#include <stdio.h>

char* i2a(char* p,int n);
int main()
{
    char str[200];
    char *p=&str;
    int n;
    scanf("%d",&n);
    p=i2a(p,n);
    printf("%s",p);
    return 0;
}
char* i2a(char* p,int n)
{
    int x=n*10,y;
    if(x>9)
    {
        if(x>19)
            x/=10;
        y=x%10;
        i2a(p,x);
        *p=y;
        p++;
    }
    else
        *p='\0';
    return p;
}
