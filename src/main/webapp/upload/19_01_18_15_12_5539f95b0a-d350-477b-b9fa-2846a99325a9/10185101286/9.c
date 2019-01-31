#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x==0){
        y=0;
    }
    else y=fabs(x)/x;
    printf("%d",y);
    return 0;
}
