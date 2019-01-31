#include <stdio.h>
void ten_two(int);
int main()
{
    int n;
    scanf("%d",&n);
    ten_two(n);
    return 0;
}
void ten_two(int n)
{
    if(n>0)
    {
        ten_two(n/2);
        printf("%d",n%2);
    }
}
