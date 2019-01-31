#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100]={0};
    int i=0;

  while(scanf("%d",&a[i])>0&&getchar()!='\n')
    i++;
    int j=i;
   for(;j>0;j--)
   {
       if(j==i)
       printf("%d",a[j-1]);
       else
       printf(" %d",a[j-1]);
   }
   return 0;
}
