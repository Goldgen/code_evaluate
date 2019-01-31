#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,A,B;
    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    scanf("%d %d",&g,&h);
    A=a+b+c+d+e+f+g+h;
    scanf("%d%*c%d%*c%d",&i,&j,&k);
    scanf("%d%*c%d%*c%d",&l,&m,&n);
    scanf("%d%*c%d",&o,&p);
    B=i+j+k+l+m+n+o+p;
    printf("%d\n%d",A,B);
    return 0;
}