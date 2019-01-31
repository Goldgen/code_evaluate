#include<stdio.h>
int main()
{
  int yeara,yearb,montha,monthb,datea,dateb,sum=0,a,b;
  scanf("%d %d %d %d %d %d",&yeara,&montha,&datea,&yearb,&monthb,&dateb);
  for(a=yeara;a<=(yearb-1);a++)
 { if((a%4==0&&a%100!=0)||a%400==0)
  sum+=366;
  else
  sum+=365;}
  for(a=1;a<=(montha-1);a++){
  switch(a)
  {case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    sum-=31;
    break;
    case 2:
    if((yeara%4==0&&yeara%100!=0)||yeara%400==0)
    sum-=29;
    else
    sum-=28;
    break;
    default:
    sum-=30;
    break;}}
    sum-=datea;
    for(a=1;a<=(monthb-1);a++){
    switch(a)
  {case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    sum+=31;
    break;
    case 2:
    if((yearb%4==0&&yearb%100!=0)||yearb%400==0)
    sum+=29;
    else
    sum+=28;
    break;
    default:
    sum+=30;
    break;}}
    sum+=dateb;
  printf("采集时间为%d天",sum);
  return 0;}

