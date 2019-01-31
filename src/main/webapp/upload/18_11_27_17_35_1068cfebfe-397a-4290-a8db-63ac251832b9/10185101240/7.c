#include <stdio.h>
#include <stdlib.h>
void main()
{
  int n,i,m;
  int cnt=0;
  int index=1;
  scanf("%d",&n);
  int input[1000];
  for(i=0;i<n;i++)
  {
      scanf("%d",&input[i]);
  }
  scanf("%d",&m);
  for(i=0;i<n;i++)
  {
      if(input[i]==m)
        {
            cnt++;
        }
  }
  if(cnt==0)
    printf("ERROR");
  else
  {
      for(i=0;i<n;i++)
      {
         if(input[i]==m)
         {
             if(cnt==1)
                printf("%d",i);
             else
             {
                if(index==1)
                    {printf("%d",i);
                    index++;}
                else
                  printf(" %d",i);
             }
         }
      }
  }
  return 0;
}