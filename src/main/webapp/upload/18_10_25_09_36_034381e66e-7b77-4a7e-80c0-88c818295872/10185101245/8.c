#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int y1,y2;
    switch(b)
    {
    case 1:
        y1=y1+c;
        break;
    case 2:
        y1=31+c;
        break;
    case 3:
        if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=60+c;
        else
            y1=59+c;
        break;
    case 4:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=91+c;
        else
            y1=90+c;
        break;
    case 5:
        if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=121+c;
        else
            y1=120+c;
        break;
    case 6:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=152+c;
        else
            y1=151+c;
        break;
    case 7:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=182+c;
        else
            y1=181+c;
        break;
    case 8:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=213+c;
        else
            y1=212+c;
        break;
    case 9:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=244+c;
        else
            y1=243+c;
        break;
    case 10:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=274+c;
        else
            y1=273+c;
        break;
    case 11:
         if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=304+c;
        else
            y1=303+c;
        break;
    default:
        if ((a%4==0&&a%100!=0)||(a%400==0))
            y1=335+c;
        else
            y1=334+c;
        break;
    }
    int x,m,n;
    x=a/4,m=a/100,n=a/400;
    y1=y1+365*a+x-m+n;
    switch(e)
    {
    case 1:
        y2=y2+f;
        break;
    case 2:
        y2=31+f;
        break;
    case 3:
         if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=60+f;
        else
            y2=59+f;
        break;
    case 4:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=91+f;
        else
            y2=90+f;
        break;
    case 5:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=121+f;
        else
            y2=120+f;
        break;
    case 6:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=152+f;
        else
            y2=151+f;
        break;
    case 7:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=182+f;
        else
            y2=181+f;
        break;
    case 8:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=213+f;
        else
            y2=212+f;
        break;
    case 9:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=244+f;
        else
            y2=243+f;
        break;
    case 10:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=274+f;
        else
            y2=273+f;
        break;
    case 11:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=304+f;
        else
            y2=303+f;
        break;
    default:
        if ((d%4==0&&d%100!=0)||(d%400==0))
            y2=335+f;
        else
            y2=334+f;
        break;
    }
   int y=d/4,o=d/100,p=d/400;
   y2=y2+365*d+y-o+p;
   int z;
   z=y2-y1;
   printf("采集时间为%d天",z);

    return 0;
}