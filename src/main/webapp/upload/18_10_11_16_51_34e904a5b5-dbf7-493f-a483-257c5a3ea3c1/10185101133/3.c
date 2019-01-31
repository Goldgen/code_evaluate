#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num>=1 && num<=99){
    int a,b;
    a = num/10;
    b = num%10;
    printf("%d %d",b,a);}

    return 0;
}
