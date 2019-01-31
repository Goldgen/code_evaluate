#include<stdio.h>
#include<math.h>
char* i2a(char* p,int n);

int main(void)
{
    char p[11];
    int n = 0;
    puts(i2a(p,n));
}

char* i2a(char* p,int n)
{
    static int i = 0;
    p[i] = getchar();
    if(p[i]!='\n' && p[i]!=EOF)
    {
        i++;
        i2a(p,n);
    }
    else
    {
        p[i] = '\0';
        return p;
    }
}
