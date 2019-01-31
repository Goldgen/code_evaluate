#include<stdio.h>
#include<math.h>
int main (void)
{
    int n,a,b,c;
    double d,s=0;
    char m;
    while(scanf("%c",&m)!=EOF&&m!='T')
   {
       scanf("%d%d%d%d",&n,&a,&b,&c);
           if(m=='P')
		   {
		;     d=(double)(n*a*b*c*0.89)/12;
               printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",n,a,b,c,d);
               s+=d;
           }
           else if(m=='F')
           {
               d=(double)(n*a*b*c*1.09)/12;
               printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",n,a,b,c,d);
               s+=d;
           }
           else if(m=='C')
           {
                 d=(double)(n*a*b*c*2.26)/12;
               printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",n,a,b,c,d);
			   s+=d;
           }
           else if(m=='M')
           {
               d=(double)(n*a*b*c*4.50)/12;
              printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",n,a,b,c,d);
              s+=d;
           }
          else if(m=='O')
          {
               d=(double)(n*a*b*c*3.10)/12;
             printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",n,a,b,c,d);
             s+=d;
          }
   }
          printf("Total cost: $%.2lf",s);
   return 0;
}