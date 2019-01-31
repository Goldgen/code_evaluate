#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;int b;
  scanf("%d  %d",&a,&b);
  if(a>=32&&b<=126&&a<=b)
  {
    for(int i=a;i<=b;i++)
    {
        printf("%-8d%c",i,i);
        if(i!=b)
            printf("\n");
    }
  }
  else if((a>=0&&a<32)||b==127)
		  printf("NONE");
}
