#include <stdio.h>
int main()
{
    unsigned int a;
    int i=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a%2==1)i+=1;
        a>>=1;
    }
    printf("%d",i);
    return 0;
}
