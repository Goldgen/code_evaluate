#include <stdio.h>
#include <stdlib.h>

void Func(int n);
int main()
{
    int num;
    scanf("%d",&num);
    Func(num);
    return 0;
}

void Func(int n){
    if (n<2) printf("%d",n);
    else{
        Func(n/2);
        printf("%d",n%2);
    }
    return;
}
