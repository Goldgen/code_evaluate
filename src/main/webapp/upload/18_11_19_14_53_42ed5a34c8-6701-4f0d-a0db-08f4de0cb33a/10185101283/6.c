#include<stdio.h>
int fibonacci(int a){    //fibonacci数列
    static int b=1;
   static int c=0;
   static int d=1;
    if(a==0)
       d=0;
    else if(a>0)
    {
        fibonacci(a-1);
        c=b;
        b=d;
        d=c+b;
    }
    return d;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
    return 0;
}