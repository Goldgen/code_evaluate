#include<math.h>
     #include<stdio.h>
     int main()
     {
         int d;
         int p;
       
          float r;
          scanf(" %d%d%f",&d,&p,&r);

         r=r/100;
         int m;
         m=log(p/(p-d*r))/log(1+r)+0.5;



        printf ("%d",m);
         return 0;

     }

