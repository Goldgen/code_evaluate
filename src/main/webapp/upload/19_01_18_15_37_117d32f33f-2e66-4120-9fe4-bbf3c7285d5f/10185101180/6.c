#include<stdio.h>
int main()
{
    int x,y,z,maxone,max;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y)
        maxone=x;
    else
        maxone=y;
    if(maxone>z)
        max=maxone;
    else
        max=z;
    printf("%d",max);
    return 0;

}
