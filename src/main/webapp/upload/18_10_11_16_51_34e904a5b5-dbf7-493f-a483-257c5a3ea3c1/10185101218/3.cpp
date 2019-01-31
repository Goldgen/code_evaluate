#include<stdio.h>
int main()
{
    int num;
    int a,b;
    scanf("%d",&num);
    a=num/10;
    b=((float)num/(float)10-(float)a)*10+0.5;
    printf("%d %d",b,a);
    return 0;
}
