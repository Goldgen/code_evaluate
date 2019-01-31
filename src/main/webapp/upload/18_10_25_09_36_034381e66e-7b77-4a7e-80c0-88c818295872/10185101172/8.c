#include <stdio.h>

int main()
{
  int y1,m1,d1,y2,m2,d2,j,y,n,p1,n1,p2,sum1,sum2,sum=0;
  scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);

   n=y1;
  for(n+=1;n<y2;n++)
        {if((n%4==0&&n%100!=0)||n%400==0)
         j++;
        else
         j;}
   y=(y2-y1-1-j)*365+j*366;

   
    for(m1-=1;m1>0;m1--)
    {  switch(m1)
{
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    j=31;
    break;
	case 4:case 6:case 9:case 11:
    j=30;
	break;
    default:
    if((y1%4==0&&y1%100!=0)||y1%400==0)
        j=29;
    else
         j=28;
    break;
}
      p1+=j;} 
    p1+=d1;
    if((y1%4==0&&y1%100!=0)||y1%400==0)
         n1=366-p1;
    else
         n1=365-p1;
    sum1=n1;

   
    for(m2-=1;m2>0;m2--)
     {  switch(m2)
{
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    j=31;
    break;
	case 4:case 6:case 9:case 11:
    j=30;
	break;
    default:
    if((y2%4==0&&y2%100!=0)||y2%400==0)
        j=29;
    else
         j=28;
    break;
}
	  p2+=j;} 
      sum2=p2+d2;

   sum=sum1+sum2+y;
   printf("采集时间为%d天",sum);

  return 0;
}