#include<stdio.h>

 int main()
     {
	  int i,j,n1=0;
	  int n=1;    
      scanf("%d %d",&i,&j);
      while(n!=0)
      {
	  if(i<j)
      {
	  n=j%i;
      n1=i;
	  j=i;
      i=n;
	  }
      else
      {
	  n=i%j;
      n1=j;
	  i=j;
      j=n;
	  }
  }
	  printf("%d",n1);
	  return 0;
	  }