#include <stdio.h>
char* i2a(char* p,int n)
{   static int i=0;
    p[i]=getchar();
    if (p[i]!='\n'&&p[i]!=EOF)
    {
        ++i;
        i2a(p,n);
    }
    else
    {
        p[i]='\0';
        return p;
    }
}
int main()
{
int n=0;
char a[11];
puts(i2a(a,n));
 return 0;
}


