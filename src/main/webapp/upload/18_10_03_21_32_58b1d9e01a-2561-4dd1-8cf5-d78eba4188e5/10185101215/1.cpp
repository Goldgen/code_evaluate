 #include<stdio.h>
#include<math.h>
int main(void)
{
   int d ;                     //The total money which in debt
   int p ;                    //The money_month_given
   float r  ;                    //The money_increase_month
   int m  ;                   //The total_number_month_given
   scanf("%d%d%f ",&d,&p,&r);
   r=r/100;
   m=log(p/(p-d*r))/log(1+r)+ 0.5;
   printf("%d",m);
   return 0;
}
