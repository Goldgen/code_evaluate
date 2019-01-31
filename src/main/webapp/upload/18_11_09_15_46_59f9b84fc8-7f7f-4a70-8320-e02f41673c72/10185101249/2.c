#include <stdio.h>
int main()
{
    double a,b,c,m,s;
    int i;
    c=0;
    a=1;
    b=2;
    for(i=1;i<=50;i++)
    {
        m=b/a;
        c=b;
        b+=a;
        a=c;
        s+=m;
    }
    printf("%.2f",s);
	return 0;
}
