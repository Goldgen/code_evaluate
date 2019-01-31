#include<stdio.h>
int main()
{
    int n,m;
scanf("%d%d",&m,&n);
if(m%400==0||(m%4==0&&m%100!=0))
    {

  printf("闰年 ");
  if(n==2)
    printf("冬季 29");
else    switch(n)
{
case 1:
    printf("冬季 31");
    break;

    break;
    case 3:
        printf("春季 31");
        break;
    case 4:
        printf("春季 30");
        break;
    case 5:
        printf("春季 31");
        break;
    case 6:
        printf("夏季 30");
        break;
    case 7:
        printf("夏季 31");
        break;
    case 8:
        printf("夏季 31");
        break;
    case 9:
        printf("秋季 30");
        break;
    case 10:
        printf("秋季 31");
        break;
    case 11:
        printf("秋季 30");
        break;
        case 12:
        printf("冬季 31");
        break;

    }}
else
  {

   printf("不是闰年 ");
    switch(n)
{
case 1:
    printf("冬季 31");
    break;
    case 2:
    printf("冬季 28");
    break;
    case 3:
        printf("春季 31");
        break;
    case 4:
        printf("春季 30");
        break;
    case 5:
        printf("春季 31");
        break;
    case 6:
        printf("夏季 30");
        break;
    case 7:
        printf("夏季 31");
        break;
    case 8:
        printf("夏季 31");
        break;
    case 9:
        printf("秋季 30");
        break;
    case 10:
        printf("秋季 31");
        break;
    case 11:
        printf("秋季 30");
        break;
        case 12:
        printf("冬季 31");
        break;

}}
    return 0;
}
