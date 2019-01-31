#include <stdio.h>

int main()
{
    int n,i,m,o=0;
    int result=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            result=0;
            for(o=i;o<n-1;o++)
                a[o]=a[o+1];
        }
        if(!result)
            break;
    }
    if(result)
        printf("ERROR");
    else{
    for(i=0;i<n-1;i++)
       {
        printf("%d",a[i]);
        if(i!=n-2)
            printf(" ");}
    }
  return 0;
}
