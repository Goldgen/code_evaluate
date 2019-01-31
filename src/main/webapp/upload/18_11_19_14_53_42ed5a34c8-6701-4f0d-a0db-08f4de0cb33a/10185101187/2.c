#include <stdio.h>

int add(int n)
    {
        if(n==0)
            return 0;
        else if(n!=0)
            return add(n/10)+n%10;
    }

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", add(n));
}
