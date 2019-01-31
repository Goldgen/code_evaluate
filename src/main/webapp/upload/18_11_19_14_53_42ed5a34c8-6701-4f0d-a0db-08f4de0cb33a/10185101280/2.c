
#include<stdio.h>
int sum(int num);

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
int sum(int num)
{
    if(num<10)
        return num;
    else
       return num%10+sum(num/10);
}
