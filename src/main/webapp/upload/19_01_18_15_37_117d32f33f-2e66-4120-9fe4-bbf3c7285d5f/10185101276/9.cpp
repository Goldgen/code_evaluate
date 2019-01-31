#include <stdio.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if (a<0)b=-1;
    else if(a==0)b=0;
    else b=1;
    printf("%d",b);
    
    return 0;
}
