#include <stdio.h>

int main()

{

   int year,month,d;

   int years,months,ds;

   int m,i,y;//y为年，m为月，i为日

   long long int sum=0,sums=0;

   int date[2][12][31]={{{0}}};

   scanf("%d %d %d %d %d %d",&year,&month,&d,&years,&months,&ds);

   month-=1;

   d-=1;

   months-=1;

   ds-=1;//转换为数组地址表示

   for (m=0;m<=11;m++)

   {

        if(m==0||m==2||m==4||m==6||m==7||m==9||m==11)

        {

                for(i=0;i<=30;i++)

                {

                    date[0][m][i]=1;

                    date[1][m][i]=1;

                }

        }

        else if(m==1)

        {

            for(i=0;i<=28;i++)date[0][m][i]=1;

            for(i=0;i<=27;i++)date[1][m][i]=1;

        }

        else for(i=0;i<=29;i++)

        {

            date[0][m][i]=1;

            date[1][m][i]=1;

        }

   }

   //数组数据储存完成，[0]为闰年，[1]为非闰年

   for(y=1;y<=year;y++)

   {

       if(y!=year)

       {

          if((y%4==0&&y%100!=0)||y%400==0)

          {

             for (m=0;m<=11;m++)

                for(i=0;i<=30;i++)sum+=date[0][m][i];

          }

          else

          {

             for (m=0;m<=11;m++)

                for(i=0;i<=30;i++)sum+=date[1][m][i];

          }

       }

       //年份不为当年时天数计算

       else

       {

           if((y%4==0&&y%100!=0)||y%400==0)

          {

             for (m=0;m<=month;m++)

             {

                if(m!=month)

                for(i=0;i<=30;i++)sum+=date[0][m][i];

                else for(i=0;i<=d;i++)sum+=date[0][m][i];

             }

          }

          else

          {

             for (m=0;m<=month;m++)

             {

                 if(m!=month)

                for(i=0;i<=30;i++)sum+=date[1][m][i];

                else for(i=0;i<=d;i++)sum+=date[1][m][i];

             }

          }

       }

       //年份为当年时天数计算

   }

   //第一个日期总天数

   for(y=1;y<=years;y++)

   {

       if(y!=years)

       {

          if((y%4==0&&y%100!=0)||y%400==0)

          {

             for (m=0;m<=11;m++)

                for(i=0;i<=30;i++)sums+=date[0][m][i];

          }

          else

          {

             for (m=0;m<=11;m++)

                for(i=0;i<=30;i++)sums+=date[1][m][i];

          }

       }

       else

       {

           if((y%4==0&&y%100!=0)||y%400==0)

          {

             for (m=0;m<=months;m++)

             {

                if(m!=months)

                     for(i=0;i<=30;i++)sums+=date[0][m][i];

                else for(i=0;i<=ds;i++)sums+=date[0][m][i];

             }

          }

          else

          {

             for (m=0;m<=months;m++)

             {

                if(m!=months)

                     for(i=0;i<=30;i++)sums+=date[1][m][i];

                else for(i=0;i<=ds;i++)sums+=date[1][m][i];

             }

          }

       }

   }

   //第二个日期总天数

   printf("采集时间为%lld天",sums-sum);//两者总天数之差即为相隔天数



   return 0;

}
