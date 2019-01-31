#include<stdio.h>
int main()
{
    int n,b,c;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    scanf("%d",&b);
    for( c=0;c<n;++c)
    {
        if(a[c]==b)
            break;
    }
    if(c==n)
        printf("ERROR");
    else
    {
        if(c<n-2)
        {
            for(int i=0;i<n-2;++i)
            {
                if(a[i]==b)
                    b=0;
                else if(a[i]!=b)
                    printf("%d ",a[i]);
            }
            printf("%d %d",a[n-2],a[n-1]);
        }
        else
              {
                    for(int i=0;i<n-2;++i)
                 {
                   if(a[i]!=b)
                     printf("%d ",a[i]);
                 }
                 if(c==n-2)
                  printf("%d",a[n-1]);
                  else
                    printf("%d",a[n-2]);
              }
    }
        return 0;
}