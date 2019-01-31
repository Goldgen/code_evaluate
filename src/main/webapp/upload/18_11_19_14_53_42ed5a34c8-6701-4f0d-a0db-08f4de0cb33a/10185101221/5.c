#include <stdio.h>
#include <stdlib.h>

int GDB (int a, int b)
{
    if(b==0)
        return a;
    return GDB(b,a%b);
}

int main()
{
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d",&num1,&num2);
    printf("%d",GDB(num1,num2));
    return 0;
}
