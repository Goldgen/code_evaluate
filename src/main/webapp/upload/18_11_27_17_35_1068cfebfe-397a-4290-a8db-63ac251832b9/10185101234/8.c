#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,m,x=1,xmax=1;
   
    scanf("%d",&n);
    int data[n];
  
    for(k=0;k<n;k++)
        scanf("%d",&data[k]);

    for(m=0;m<n;m++)
    {
        if(data[m]==data[m+1])
        {
            x+=1;
            continue;
        }
        if(x>xmax)
           xmax=x;
           x=1;
    }
    printf("%d",xmax);
    return 0;
}