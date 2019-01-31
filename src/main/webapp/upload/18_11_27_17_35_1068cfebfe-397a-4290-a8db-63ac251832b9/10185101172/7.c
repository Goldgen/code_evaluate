#include <stdio.h>

int main()
{
    int n,i,m,count=0;
    int result=1;
    scanf("%d",&n);
    int a[n];
    int b[100];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            result=0;
            b[count]=i;
            count++;
        }
    }
    if(result)
        printf("ERROR");
    for(i=0;i<count;i++)
    {
        printf("%d",b[i]);
        if(i!=count-1)
            printf(" ");
    }
  return 0;
}
