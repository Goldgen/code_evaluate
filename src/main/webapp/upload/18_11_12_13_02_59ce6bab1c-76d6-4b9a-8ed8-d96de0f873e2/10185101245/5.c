#include <stdio.h>
#include <stdlib.h>
double sum;
double f(int a,double b,double c,double d,double e)
{
   switch(a)
   {
   case'P':
   sum=c/12*d*e*b*0.89;
     printf("%.0lf %.0lf*%.0lf*%.0lf Pine, Cost: $%.2lf\n",b,c,d,e,sum);
    break;
   case'F':
   sum=c/12*d*e*b*1.09;
   printf("%.0lf %.0lf*%.0lf*%.0lf Fire, Cost: $%.2lf\n",b,c,d,e,sum);
   break;
   case'C':
   sum=c/12*d*e*b*2.26;
   printf("%.0lf %.0lf*%.0lf*%.0lf Cedar, Cost: $%.2lf\n",b,c,d,e,sum);
   break;
   case 'M':
    sum=c/12*d*e*b*4.50;
    printf("%.0lf %.0lf*%.0lf*%.0lf Maple, Cost: $%.2lf\n",b,c,d,e,sum);
    break;
    case'O':
    sum=c/12*d*e*b*3.10;
    printf("%.0lf %.0lf*%.0lf*%.0lf Oak, Cost: $%.2lf\n",b,c,d,e,sum);
   break;
    default:
        break;
   }
   return sum;
}
int main()
{
 int type;
 double number,width,height,length;

 double total=0;

    while (scanf("%c",&type)&&type!='T')
 {
     scanf(" %lf %lf %lf %lf\n",&number,&width,&height,&length);
     f(type,number,width,height,length);
     total+=sum;

 }
 printf("Total cost: $%.2lf",total);
 return 0;
}