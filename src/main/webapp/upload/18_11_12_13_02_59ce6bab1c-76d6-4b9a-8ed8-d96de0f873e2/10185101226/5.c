#include <stdio.h>
#include <stdlib.h>

double buy(char tree,int n,int width,int high,int long)
{
    double sum=0;
    if tree=='p';
    sum=(double)width/12*high*long*0.89*n;
    if tree=='f';
    sum=(double)width/12*high*long*1.09*n;    
    if tree=='c';
    sum=(double)width/12*high*long*2.26*n;    
    if tree=='m';
    sum=(double)width/12*high*long*4.50*n;    
    if tree=='o';
    sum=(double)width/12*high*long*3.10*n;
    return sum;
}
int main()
{
    char tr;
    int a,b,c,d;
    double to=0;
    scanf("%c",tr);
    while(tr!='T')
    {
        scanf("%d %d %d %d",a,b,c,d);
        to+=buy(tr,a,b,c,d);
    }
    
    return 0;
}
