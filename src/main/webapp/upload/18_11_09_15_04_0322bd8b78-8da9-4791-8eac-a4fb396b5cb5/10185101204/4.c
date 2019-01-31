#include <stdio.h>
int main()
{
    int n=0,m=1,q=1;
    scanf("%d",&n);
    if(n==0)
    n=1;
    q=n;
    for(m=n-1;m>1;m--)
      {q*=m;
    q=q%20181111;}
    printf("%d",q);
}