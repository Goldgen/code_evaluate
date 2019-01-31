#include<stdio.h>
#include<math.h>
int main (void)
{
    int x,y,i,j;
    scanf("%d %d",&x,&y);
    for(i=1;i<=x;i++)
    {
     if(x%i==0&&y%i==0)
            j=i;
    }
    printf("最大公约数是: %d",j);
            return 0;
}