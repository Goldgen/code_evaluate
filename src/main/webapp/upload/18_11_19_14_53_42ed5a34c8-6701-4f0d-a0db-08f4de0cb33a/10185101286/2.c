#include<stdio.h>
int sum(int a);
int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        printf("%d\n",sum(num));
    }
    return 0;
}
int sum(int a)
{
    int b=a%10;
    a=a/10;
    if(a==0)
    {
        return b;
    }
    else return b+sum(a);
}
