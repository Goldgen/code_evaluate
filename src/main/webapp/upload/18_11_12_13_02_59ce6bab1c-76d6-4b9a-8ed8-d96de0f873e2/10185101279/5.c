#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void price(char c,int n,double w,double h,double l);
double p=0.89;
double f=1.09;
double c=2.26;
double m=4.50;
double o=3.10;
double p1,p2,p3,p4,p5,total;

int main()
{
    p1=p2=p3=p4=p5=total=0;
int n;
char ch;
double w,h,l;
while(1){
        scanf("%c",&ch);
if(ch=='T'){
        printf("Total cost: $%.2lf",total);
     break;}

    else
    {
     scanf(" %d %lf %lf %lf",&n,&w,&h,&l);
    price(ch,n,w,h,l);

     }
}






   return 0;
}
void price(char ch,int n,double w,double h,double l){


switch(ch){
case 'P':
    p1=w*h*l/12*p*n;
    printf("%d %.0lf*%.0lf*%.0lf Pine, Cost: $%.2lf\n",n,w,h,l,p1);
total+=p1;
    break;
case 'F':
     p2=w*h*l/12*f*n;
    printf("%d %.0lf*%.0lf*%.0lf Fire, Cost: $%.2lf\n",n,w,h,l,p2);
    total+=p2;
    break;
case 'C':
     p3=w*h*l/12*c*n;
    printf("%d %.0lf*%.0lf*%.0lf Cedar, Cost: $%.2lf\n",n,w,h,l,p3);
    total+=p3;
    break;
case 'M':
     p4=w*h*l/12*m*n;
    printf("%d %.0lf*%.0lf*%.0lf Maple, Cost: $%.2lf\n",n,w,h,l,p4);
    total+=p4;
    break;
case 'O':
     p5=w*h*l/12*o*n;
    printf("%d %.0lf*%.0lf*%.0lf Oak, Cost: $%.2lf\n",n,w,h,l,p5);
    total+=p5;
    break;

default:
    break;




}
}




































































































