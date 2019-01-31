#include <stdio.h>
#include <stdlib.h>
void tran(int n){
    int a=n%2;
    if(n/2)
        tran(n/2);
    printf("%d",a);
}
int main()
{
    int n;
    scanf("%d",&n);
    tran(n);
}
