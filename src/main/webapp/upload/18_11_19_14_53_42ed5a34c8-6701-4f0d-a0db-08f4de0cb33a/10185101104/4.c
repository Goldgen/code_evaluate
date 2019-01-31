#include <stdio.h>

void change(int n)
{
    if(n<1)
        return;
    change(n/2);
    printf("%d",n%2);
}

int main()
{
    int num;
    scanf("%d",&num);
    change(num);
    return 0;
}
