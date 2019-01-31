#include<stdio.h>
#include<math.h>
int main()
{
    int a=2,b=3,c=4,i=0;
    double data[100],s=0;
    while (i<100)
    {
        data[i++]=1.0/(a*b*c);
        a=c;
        b=a+1;
        c=b+1;
    }
    for (int v=0; v<100; v++)
        s+=pow(-1,v)*data[v];
    s*=4.0;
    s+=3.0;
    printf("%.4lf",s);
    return 0;
}
