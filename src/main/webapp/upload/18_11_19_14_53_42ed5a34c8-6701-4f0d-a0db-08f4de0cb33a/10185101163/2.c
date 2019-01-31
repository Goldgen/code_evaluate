#include <stdio.h>
#include <stdlib.h>
int A(int n){
if(n<10) return n;
else return (n%10)+A(n/10);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",A(n));
    return 0;
}
