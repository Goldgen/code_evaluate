#include <stdio.h>
void shi_er(unsigned long n)
{
    int r;
    r=n%2;
    if(n>=2)
    {
        shi_er(n/2);
    }
    putchar(r==0?'0':'1');
}
int main(void)
{
   int n;
   scanf("%d",&n);
   shi_er(n);
}
