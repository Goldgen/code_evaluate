#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    int A,B,C,D,E,F,G,H,I;

    scanf("%d %d %d",&a,&b,&c);
    scanf("%d %d %d",&d,&e,&f);
    scanf("%d %d",&g,&h);
    i=a+b+c+d+e+f+g+h;
    printf("%d\n",i);

    scanf("%d,%d,%d",&A,&B,&C);
    scanf("%d,%d,%d",&D,&E,&F);
    scanf("%d,%d",&G,&H);
    I=A+B+C+D+E+F+G+H;
    printf("%d",I);

    return 0;
}