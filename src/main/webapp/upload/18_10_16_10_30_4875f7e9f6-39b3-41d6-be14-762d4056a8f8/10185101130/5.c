#include<stdio.h>

int main(void)
{
    int a,b,c,d,e,f,g,h,tatol;
    scanf("%d %d %d\n%d %d %d\n%d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    tatol=a+b+c+d+e+f+g+h;
    printf("%d\n",tatol);

    scanf("%d,%d,%d\n%d,%d,%d\n%d,%d",&a,&b,&c,&d,&e,&f,&g,&h);
    tatol=a+b+c+d+e+f+g+h;
    printf("%d",tatol);
    return 0;

}

