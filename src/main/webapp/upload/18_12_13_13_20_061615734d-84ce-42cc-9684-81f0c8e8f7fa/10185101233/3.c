#include <stdio.h>
#include<string.h>
#include<math.h>
char* i2a(char* p, int n)
{
    int i,f;
    for(f=1;pow(10,f)<=n;f++)
        ;
    char *t=p+f;
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
    char t[80];
    int n;
    scanf("%d",&n);
    i2a(t, n);
printf("%s",t);
return 0;
}
