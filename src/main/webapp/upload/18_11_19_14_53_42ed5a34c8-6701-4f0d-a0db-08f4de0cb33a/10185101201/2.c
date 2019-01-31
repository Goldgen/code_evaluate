#include<stdio.h>
int g(int a)
{
    int b,c=a;
    int static s=0;
    if(c>0)
    {
        b=a%10;
        c=(a-b)/10;
        s+=b;
        g(c);
    }
    else
        return s;

}
main()
{
    int num;
    scanf("%d",&num);
    printf("%d",g(num));
}