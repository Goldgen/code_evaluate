#include<stdio.h>
int main()
{
	float x,max=0,min=100;
	scanf("%f",&x);
	   while(x>=0){
        if(x>max)
	  {
         max=x;
	   }		 
        if(x<min)
	   {	 
        min=x;
	   }
	   scanf("%f",&x);
	  }
	printf("最高成绩是: %.2f,",max);
	printf(" 最低成绩是: %.2f",min);
		return 0;
}