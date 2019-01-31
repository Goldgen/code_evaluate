#include<stdio.h>
#include<math.h>

int number(int n)
{
  int i,j=0;
  for(i=2;i<sqrt(n);i++)
    {if(n%i==0)
        {j=1;
        return 0;}
    }
  if(j==0)
    return 1;
  }

  int main()
  {
      int n,result;
      scanf("%d",&n);
      result=number(n);
      if(result==1)
        printf("It is a prime number.");
      else
        printf("It's not a prime number.");

  }
