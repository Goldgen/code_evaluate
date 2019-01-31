#include <stdio.h>
#include <stdlib.h>

int func(int n){
    if(n/10==0)
        return n;
    return n%10+func(n/10);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",func(n));
    return 0;
}
