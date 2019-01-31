#include<stdio.h>

 int main()
     {
	  int i,j,sum1,sum2=0;    
      for(i=1;i<100;i+=2)
      sum1+=i;
      for(j=2;j<=100;j+=2)
      sum2+=j;
      printf("%d %d",sum1,sum2);
	  return 0;
	  }