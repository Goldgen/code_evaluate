#include <stdio.h>

int main(void) {
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d\n%d %d %d\n%d %d\n",&a,&b,&c,&d,&e,&f,&g,&h);
    int sum=0;
    sum = a+b+c+d+e+f+g+h;
    printf("%d\n",sum);
    scanf("%d,%d,%d\n%d,%d,%d\n%d,%d\n",&a,&b,&c,&d,&e,&f,&g,&h);
    sum = a+b+c+d+e+f+g+h;
    printf("%d",sum);
    return 0;
}