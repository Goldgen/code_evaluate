#include<stdio.h>
int dig(int a)
{
    int mark = 0;
    while(a>=10)
    {
        a/=10;
        mark++;
    }
    return mark;
}
int main()
{
    int a,b,c;
    int n;
    while(scanf("%d+%d=%d",&a,&b,&c)!=EOF)
    {
        int t = 0;
        if(a+b==c)
            printf("0\n");
        else
        {
        if((c-b)%10==0&&(c-b)%a==0)
        {
            n = (c-b)/a;
            t = dig(n);
        }
        else
        {
            n = (c-a)/b;
            t = -dig(n);
        }
    printf("%d\n",t);
        }
    }
   return 0;
}