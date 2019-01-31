#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,x,s[100],n=0;
    for(x=100;x<=999;x++)
    {
        a=x/100;
        b=(x%100)/10;     
        c=x%10;
        if(x==(a*a*a+b*b*b+c*c*c))
        {
           s[n]=x;
           n++;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d",s[i]);
        if(i!=n-1)
        {
            printf(" ");
        }
    }
    return 0;
}





