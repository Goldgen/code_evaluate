#include <stdio.h>
#include <stdlib.h>
int Sum(int n)
{
    static int sum=0;
    if(n!=0)
    {
        sum+=n%10;
        return Sum((n-n%10)/10);
    }
    else
        return sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",Sum(a));
    return 0;
}