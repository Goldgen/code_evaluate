#include <stdio.h>

void binary(int a);
int main()
{
    int n;
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int a){
    if(a<2)
        printf("%d",a);
    else{
        binary(a/2);
        printf("%d",a%2);
    }
}
