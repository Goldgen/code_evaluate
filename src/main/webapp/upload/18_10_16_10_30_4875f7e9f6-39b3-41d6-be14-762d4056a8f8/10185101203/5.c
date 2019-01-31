#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g,h,i,A,B,C,D,E,F,G,H,I;
    char m;
    scanf("%d %d %d",&a,&b,&c);
    getchar();
    scanf("%d %d %d",&d,&e,&f);
    getchar();
    scanf("%d %d",&g,&h);
    getchar();
    i=a+b+c+d+e+f+g+h;
    printf("%d\n",i);
    scanf("%d%c%d%c%d",&A,&m,&B,&m,&C);
    getchar();
    scanf("%d%c%d%c%d",&D,&m,&E,&m,&F);
    getchar();
    scanf("%d%c%d",&G,&m,&H);
    getchar();
    I=A+B+C+D+E+F+G+H;
    printf("%d",I);
}