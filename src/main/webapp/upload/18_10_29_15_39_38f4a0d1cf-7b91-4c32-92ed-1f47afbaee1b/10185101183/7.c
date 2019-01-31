#include <stdio.h>
int main(void)
{
    int a=0;
    int i=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a%2==1)
        i=i+1;
        a=a/2;
    }
    printf("%d",i);
    return 0;
}
