#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t],p =0,b=-1;
    for(int x=0;x<t;x++)
        scanf("%d",&a[x]);
    int m;//m为需要删除的元素
    scanf("%d",&m);
    for(int x=t-1;x>=0;x--)
    {
        if(a[x]==m)
         {
            b = x;
         }
    }
    if(b==-1)
        printf("ERROR\n");
    else
        for(int x=0;x<t;x++)
    {
        if(x!=b)
        {
            printf("%d",a[x]);
          if(p<t-2)
            printf(" ");
            p++;
        }
    }
return 0;
}