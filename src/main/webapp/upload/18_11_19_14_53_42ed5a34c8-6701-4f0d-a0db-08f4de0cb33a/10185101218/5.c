#include<stdio.h>

int GDB(int,int);

int main(void)
{
    int num1=0,num2=0,c;
    scanf("%d %d",&num1,&num2);
    c=GDB(num1,num2);
    printf("%d",c);
    return 0;
}

int GDB(int a,int b)
{
    if(b>a)
        return GDB(b,a);
    else if(b==0)
        return a;
    else if(b>0)
        return GDB(b,a%b);
}
