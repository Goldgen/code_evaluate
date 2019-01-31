#include <stdio.h>

int main()
{
    int x=0;
    scanf("%d",&x);
    if(x<0)
        printf("%d",-1);
    if(x==0)
        printf("%d",0);
    if(x>0)
        printf("%d",1);
 return 0;
}