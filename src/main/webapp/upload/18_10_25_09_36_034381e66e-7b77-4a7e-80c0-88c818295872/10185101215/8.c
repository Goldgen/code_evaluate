#include<stdio.h>
#include<limits.h>
int main()
{
    int x,y,z,i,s1,s2,s3,a,b,c,s4,s5,s6,s,leap=0;
    scanf("%d%d%d",&x,&y,&z);
    scanf("%d%d%d",&a,&b,&c);
    leap=0;
    for(i=0;i<=x;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
            leap+=1;
        else
            leap=0;
    }
    s1=365*x+leap;
    switch(y)
    {
        case 1:s2=0;break;
         case 2:s2=31;break;
          case 3:s2=59;break;
           case 4:s2=90;break;
            case 5:s2=120;break;
             case 6:s2=151;break;
              case 7:s2=181;break;
               case 8:s2=212;break;
                case 9:s2=243;break;
                 case 10:s2=273;break;
                  case 11:s2=304;break;
                   case 12:s2=334;break;
                    default:break;

    }
    y=s2;
    s3=s1+s2+z;

    leap=0;
    for(i=0;i<=a;i++)
    {
        if(i%4==0&&i%100!=0||i%400==0)
            leap+=1;
        else
            leap=0;
    }
    s4=365*a+leap;
    switch(b)
    {
        case 1:s5=0;break;
         case 2:s5=31;break;
          case 3:s5=59;break;
           case 4:s5=90;break;
            case 5:s5=120;break;
             case 6:s5=151;break;
              case 7:s5=181;break;
               case 8:s5=212;break;
                case 9:s5=243;break;
                 case 10:s5=273;break;
                  case 11:s5=304;break;
                   case 12:s5=334;break;
                    default:break;

    }
    b=s5;
    s6=s4+s5+c;
    s=s6-s3;
    printf("采集时间为%d天",s);
    return 0;
}