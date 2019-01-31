#include <stdio.h>

int sum(int n)
{
    int i,sum=0;
    for(;n>0;n/=10)
{
           i=n%10;
           sum+=i;}
        return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));

}
