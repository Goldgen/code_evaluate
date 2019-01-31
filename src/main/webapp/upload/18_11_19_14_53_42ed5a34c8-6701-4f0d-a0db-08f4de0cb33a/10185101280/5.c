#include<stdio.h>

int main()
{
int a,b;
scanf("%d%d",&a,&b);
printf("%d",GDB(a,b));
return 0;
}

int GDB(int a,int b)
{
    if (b==0)
        return a;
    else if(b>0)
        return GDB(b,a%b);
}
