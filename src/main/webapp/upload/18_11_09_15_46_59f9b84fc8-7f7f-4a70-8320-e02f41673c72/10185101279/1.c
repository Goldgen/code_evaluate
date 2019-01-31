

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  int count=1;
  for (int i=1;i<=99;i++)
  {
      if(i%3==0&&i%10==6){
            if(count==1)
        {printf("%d",i);
        count=0;}
        else
            printf(" %d",i);

      }
  }

  return 0;
}

































































