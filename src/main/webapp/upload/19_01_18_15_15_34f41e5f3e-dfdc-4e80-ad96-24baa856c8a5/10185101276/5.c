#include <stdio.h>
int main()
{
    int sum=0,sums=0;
    int i=1;
    for (i=1;i<=100;i+=2)
    {
        sum+=i;
    }
    for (i=2;i<=100;i+=2)
    {
        sums+=i;
    }
    printf("%d %d",sum,sums);
    return 0;
}
