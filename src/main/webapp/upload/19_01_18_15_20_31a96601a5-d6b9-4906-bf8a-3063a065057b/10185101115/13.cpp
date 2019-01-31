#include<stdio.h>
int main()
{int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if((b==1)||(b==21)||(b==31))
    printf("%dst ",b);
if((b==2)||(b==22))
    printf("%dnd ",b);
if((b==3)||(b==23))
    printf("%drd ",b);
if((b>3)&&(b<32)&&(b!=21)&&(b!=22)&&(b!=23)&&(b!=31))
    printf("%dth ",b);
if(a==1)printf("January");
if(a==2)printf("February");
if(a==3)printf("March");
if(a==4)printf("April");
if(a==5)printf("May");
if(a==6)printf("June");
if(a==7)printf("July");
if(a==8)printf("August");
if(a==9)printf("September");
if(a==10)printf("October");
if(a==11)printf("November");
if(a==12)printf("December");
printf (" %d",c);
   return 0;
}