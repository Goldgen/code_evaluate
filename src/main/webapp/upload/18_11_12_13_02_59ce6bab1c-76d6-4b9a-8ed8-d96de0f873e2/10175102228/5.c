#include<stdio.h>
#include<stdlib.h>
double caculate(int a,int b,int c)
{ double out;
  double w,h,l;
   w=((double)a)/12.0;
   h=(double)b;
   l=(double)c;
   out=w*h*l;
   return out;
}
int main()
{ char c;
int numb,width,height,length;
double cost,tcost=0.00;
 while(scanf("%c",&c)&&c!='T')
 {
    scanf("%d%d%d%d",&numb,&width,&height,&length);//输入宽度，高度和长度单位为inch,inch,feet

      double board=caculate(width,height,length);
      if(c=='P'){
      cost=(double)numb*board*0.89;
      tcost=tcost+cost;
      printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",numb,width,height,length,cost);
      }
      else if(c=='F'){
          cost=(double)numb*board*1.09;
          tcost=tcost+cost;
      printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",numb,width,height,length,cost);
        }
    else if(c=='C'){
     cost=(double)numb*board*2.26;
     tcost=tcost+cost;
      printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",numb,width,height,length,cost);
    }
    else if(c=='M'){
            cost=(double)numb*board*4.50;
        tcost=tcost+cost;
        printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",numb,width,height,length,cost);
    }
    else if(c=='O'){
            cost=(double)numb*board*3.10;
              tcost=tcost+cost;
          printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",numb,width,height,length,cost);
       }
    }printf("Total cost: $%.2lf",tcost);
   return 0;
}
