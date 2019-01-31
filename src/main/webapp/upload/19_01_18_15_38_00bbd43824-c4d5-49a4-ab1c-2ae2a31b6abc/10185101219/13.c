#include <stdio.h>
#include <stdlib.h>
int main()
{
   int year,day,i;
   char *month[]={"January","February","March","April","May","June",
				   "July","August","September","October","November","December"};
   scanf("%d %d %d",&i,&day,&year);
   if(day/10!=1)
   {
       
   
   switch(day%10){
   case 1: printf("%dst %s %d",day,month[i-1],year);
   break;
   case 2: printf("%dnd %s %d",day,month[i-1],year);
   break;
   case 3: printf("%drd %s %d",day,month[i-1],year);
   break;
   default:
    printf("%dth %s %d",day,month[i-1],year);
   break;
   }
   }
   else
   printf("%dth %s %d",day,month[i-1],year);
    

    return 0;
}
