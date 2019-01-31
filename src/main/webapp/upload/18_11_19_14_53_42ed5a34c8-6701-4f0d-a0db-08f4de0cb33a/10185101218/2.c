#include<stdio.h>
int add(int);

int main(void)
{
    int num=0;
    scanf("%d",&num);
    printf("%d",add(num));
    return 0;

}

int add(int a)
{
    if(a==0)
        return 0;
    else
        return a%10+add(a/10);
}
