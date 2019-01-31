#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a=-1,b=0,c=1;
    scanf("%d",&x);
    if (x<0){
        printf("%d",a);
    }
    else if (x==0){
        printf("%d",b);
    }
    else {
        printf("%d",c);
    }
    return 0;
}
