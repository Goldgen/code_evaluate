#include<stdio.h>
#include<math.h>
int main (void)
{
    int x,i,j=0;
    scanf("%d",&x);
    for(i=1;i<=100;i++)
    {
        if(x%2==1)
            j+=1;
        x=x/2;
        if(x==0)
            break;
    }
    printf("%d",j);
            return 0;
}