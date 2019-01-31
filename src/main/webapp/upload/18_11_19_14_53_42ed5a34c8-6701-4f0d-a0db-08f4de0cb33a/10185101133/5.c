#include <stdio.h>
#include <stdlib.h>

int func(int a,int b){
    if(b==0 || (a==b))
        return a;
    return func(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",func(a,b));
    return 0;
}

