#include <stdio.h>

void toBinary(int n);

int main()
{
    int a=0;
    scanf("%d",&a);
    toBinary(a);
    return 0;
}

void toBinary(int n){
    if(n!=0)
    {
        toBinary(n/2);
        printf("%d",n%2);
    }
}
