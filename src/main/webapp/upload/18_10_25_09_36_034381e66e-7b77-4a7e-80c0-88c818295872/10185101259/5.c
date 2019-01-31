#include<stdio.h>
int main()
{ int a,b,n,m,p;
scanf("%d %d",&a,&b);
n=a%4,m=a%100,p=a%400;
if((n==0&&m!=0)||(p==0))
printf("闰年 ");
else
printf("不是闰年 ");

switch(b)
{case 12: case 2: case 1:
 printf("冬季 ");
 break;
 case 3: case 4: case 5:
 printf("春季 ");
 break;
 case 8: case 6: case 7:
 printf("夏季 ");
 break;
 case 11: case 9: case 10:
 printf("秋季 ");
 break;
 default:
 break;}

 switch(b)
 {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    printf("31");
    break;
    case 2:
    {
    if((n==0&&m!=0)||(p==0))
    printf("29");
    else
    printf("28");
    break;}
    default:
    printf("30");
    break;}
    return 0;
}
