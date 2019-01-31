#include<stdio.h>

int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8;
    int b1,b2,b3,b4,b5,b6,b7,b8;

    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&a4,&a5,&a6);
    scanf("%d%d",&a7,&a8);
    printf("%d\n",a1+a2+a3+a5+a4+a6+a7+a8);

    scanf("%d,%d,%d",&b1,&b2,&b3);
    scanf("%d,%d,%d",&b4,&b5,&b6);
    scanf("%d,%d",&b7,&b8);
    printf("%d",b1+b2+b3+b5+b4+b6+b7+b8);
}
