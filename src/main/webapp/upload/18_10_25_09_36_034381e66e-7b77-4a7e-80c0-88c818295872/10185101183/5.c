#include <stdio.h>
int main(void)
{
    int y=0;
    int m=0;
    scanf("%d%d",&y,&m);
 if((y%4==0&&y%100!=0)||y%400==0)
 {
        printf("闰年");
       switch(m)
   {
   case 3 :case 4 :case 5 :
    {
       printf(" 春季");
       if(m==3||m==5)
            printf(" 31");
       else
            printf(" 30");
            break;
    }
   case 6 :case 7 :case 8 :
    {
        printf(" 夏季");
        if(m==7||m==8)
            printf(" 31");
        else
            printf(" 30");
             break;
    }
   case 9 :case 10 :case 11 :
    {
        printf(" 秋季");
        if(m==10)
            printf(" 31");
        else
            printf(" 30");
             break;
    }
   case 12 :case 1 :case 2 :
    {
        printf(" 冬季");
        if(m==2)
             printf(" 29");
        else
            printf(" 31");
             break;
    }
   default:
    printf("ERROR");
     break;
   }
 }
 else
  {
        printf("不是闰年");
       switch(m)
   {
   case 3 :case 4: case 5:
    {
       printf(" 春季");
       if(m==3||m==5)
            printf(" 31");
       else
            printf(" 30");
             break;
    }
   case 6 :case 7 :case 8 :
    {
        printf(" 夏季");
        if(m==7||m==8)
            printf(" 31");
        else
            printf(" 30");
             break;
    }
   case 9 :case 10: case 11 :
    {
        printf(" 秋季");
        if(m==10)
            printf(" 31");
        else
            printf(" 30");
             break;
    }
   case 12 :case 1 :case 2 :
    {
        printf(" 冬季");
        if(m==2)
             printf(" 28");
        else
            printf(" 31");
             break;
    }
   default:
    printf("ERROR");
     break;
   }
 }

}
