

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
  char ch='A';
  for(int i=1;i<=n-1;i++)
    printf(" ");
  printf("%c",ch);
  for(int i=2;i<=n;i++)
  {
      printf("\n");
      for(int j=1;j<=n-i;j++)
        printf(" ");
      for(int j=1;j<=2*i-1;j++)
        printf("%c",ch+i-1);

  }
   for(int i=n+1;i<=2*n-1;i++)
   {
       printf("\n");
       for(int j=1;j<=i-n;j++)
        printf(" ");
       for(int j=1;j<=4*n-2*i-1;j++)
        printf("%c",ch+i-1);
   }
  return 0;
}

































































