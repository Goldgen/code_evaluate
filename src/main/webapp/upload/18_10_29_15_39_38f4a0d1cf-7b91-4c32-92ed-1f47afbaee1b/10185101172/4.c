#include<stdio.h>

 int main(){    
      double n,n1,high,low,i=1;
      scanf("%lf %lf",&n,&n1);
      if(n>n1)
      {high=n;
      low=n1;
	  }
	  else{
	  	high=n1;
	  	low=n;
	  }
      while(i>0)
      {
      	scanf("%lf",&i);
      	if(i>0)
      	{
		if(i>high)
      	high=i; 
      	else if(i<low)
      	low=i;
      }
      else
      break;
	  }
	  printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",high,low);
	  return 0;
	  }