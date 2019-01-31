#include <stdio.h>
int main()
{
    int N,i=1;
    float a=1,b=2,c,s=0;
    while(i<=50)
    {
        s=s+b/a;
        c=a+b;
        a=b;
        b=c;
        i=i+1;
    }
    printf("%.2lf",s);
}
