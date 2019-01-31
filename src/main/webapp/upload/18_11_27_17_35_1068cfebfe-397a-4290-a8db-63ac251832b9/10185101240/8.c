#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   int b[]={0};
   int i, temp, len=1, flag=0;
   scanf("%d",&b[0]);
   for(i=1,temp=1; i<n; ++i)
  {
      scanf("%d",&b[i]);
      if(b[i] == b[i-1])
      { 
		  temp ++;
		  flag =1;
	  }
      else
      { 
		  flag=0;temp=1; 
	  }
         if(temp>len)
          len=temp;
  }
printf("%d",len);
return 0;
}