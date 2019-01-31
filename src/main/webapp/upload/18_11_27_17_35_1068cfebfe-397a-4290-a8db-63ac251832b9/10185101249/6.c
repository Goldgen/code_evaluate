#include <stdio.h>
int main()
{
    int i,n,x,y=-1;
    scanf("%d",&i);
    int a[10]={0};
    for(n=0;n<i;n++)
    {
        scanf("%d",&a[n]);
    }
    scanf("%d",&x);
    for(n=i-1;n>=0;n--)
    {
        if(a[n]==x)
            y=n;
    }
    if(y==-1)
        printf("ERROR");
    else
    {
      for(n=y;n<i-1;n++)
      {
        a[n]=a[n+1];
      }
      for(n=0;n<=i-2;n++)
      {
        printf("%d",a[n]);
        if(n<i-2)
            printf(" ");
      }
    }
    return 0;
}
