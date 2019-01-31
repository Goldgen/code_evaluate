#include<stdio.h>
int main()
{
    int w,x,y,z,maxone,maxtwo,max;
    scanf("%d %d %d %d",&w,&x,&y,&z);
    if(w>x)
        maxone=w;
    else
        maxone=x;
    if(y>z)
        maxtwo=y;
    else
        maxtwo=z;
    if(maxone>maxtwo)
        max=maxone;
    else
        max=maxtwo;
    printf("%d",max);
    return 0;

}
