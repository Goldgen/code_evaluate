#include <stdio.h>
#include<string.h>
char* i2a(char* p, int n){
    int i,g;
    for(g=1;pow(10,g)<=n;g++)
        ;
    char *t=p+g;
    i=n%10;
    *(t--)='\0';
    *(t--)=i+('0'-0);
    while(n>=10)
    {
        n=(n-i)/10;
        i=n%10;
        *t=i+('0'-0);
        t--;
    }
}
int main()
{
    char t[85];
    int m;
    scanf("%d",&m);
    i2a(t, m);
    printf("%s",t);
}
