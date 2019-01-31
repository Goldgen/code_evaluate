#include<stdio.h>
int main()
{
    int odd=0;
    int even=0;
    for(int i=1; i<=100; ++i)
    {
        if((i%2)==1)
            odd=odd+i;
        else
            even=even+i;
    }
    printf("%d %d",odd,even);
    return 0;
}
