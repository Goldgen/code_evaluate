#include <stdio.h>
int main()
{int n=0,i=1,j=1,k=1;
scanf("%d",&n);
printf("1");
for(i=2;i<=n;i++)
{k=1;
  printf("\n");
for(j=1;j<i;j++)
{
    printf("%d ",k);
    k=k*(i-j)/j;
}
printf("1");
}
return 0;
}