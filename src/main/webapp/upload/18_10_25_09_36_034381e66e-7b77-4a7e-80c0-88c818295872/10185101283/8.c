#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,m,n,o,y;
    int p =0;
    int day1=0;
    int day2=0;
    int year1;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    if((a%4==0)&&(a%100!=0)||(a%400==0))
        m=29,year1=366;
    else
        m=28,year1=365;
    if((d%4==0)&&(d%100!=0)||(d%400==0))
        y=29;
    else
        y=28;
     if(a<d)
     {
         for(int i=1,x=0;i<b;++i)
      {
        switch(i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         x=31;
         break;
        case 4: case 6: case 9: case 11:
        x=30;
        break;
        case 2:
        x=m;
        break;
        default:
            break;
        }
        day1=day1+x;
        x=0;
      }
     n = year1-(day1+c);
     for(int i=1,x=0;i<e;++i)
     {
          switch(i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         x=31;
         break;
        case 4: case 6: case 9: case 11:
        x=30;
        break;
        case 2:
        x=y;
        break;
        default:
            break;
        }
        day2=day2+x;
        x=0;
     }
     o=day2+f;
     for(int j=0;d-a>1;++a)
     {
         if((a%4==0)&&(a%100!=0)||(a%400==0))
            j=366;
         else
           j=365;
         p=p+j;
         j=0;
     }
     printf("采集时间为%d天",o+n+p);
     }
     else
     {
         for(int i=1,x=0;i<b;++i)
      {
        switch(i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         x=31;
         break;
        case 4: case 6: case 9: case 11:
        x=30;
        break;
        case 2:
        x=m;
        break;
        default:
            break;
        }
        day1=day1+x;
        x=0;
     }
     n = day1+c;
     for(int i=1,x=0;i<e;++i)
     {
          switch(i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
         x=31;
         break;
        case 4: case 6: case 9: case 11:
        x=30;
        break;
        case 2:
        x=y;
        break;
        default:
            break;
        }
        day2=day2+x;
        x=0;
     }
     o=day2+f;
     printf("采集时间为%d天",o-n);
  }
  return 0;
}
