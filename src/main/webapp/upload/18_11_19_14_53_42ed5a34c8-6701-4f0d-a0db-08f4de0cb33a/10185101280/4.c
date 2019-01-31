#include<stdio.h>

int main()
{
int num;
scanf("%d",&num);
b(num);
return 0;
}

int b(int num)
{
    if(num==0)
        return 0;
    else
     b(num/2);
    printf("%d",num%2);
}
