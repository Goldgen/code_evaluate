#include <stdio.h>
#include <stdlib.h>

double cost(char x,int n,int w,int h,int l)
{double y,m;
switch(x)
{case 'P': m=0.89; break;
case 'F': m=1.09; break;
case 'C':m=2.26; break;
case 'M': m=4.50; break;
case 'O': m=3.10; break;
 default: break;}
 y=n*w*h*l*m/12;
   if (x=='P') printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",n,w,h,l,y);
  else if (x=='F') printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",n,w,h,l,y);
  else if (x=='C') printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",n,w,h,l,y);
 else if (x=='M') printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",n,w,h,l,y);
  else if (x=='O') printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",n,w,h,l,y);
return y;
}
int main()
{
 int n,w,h,l;
 char x;
 double s=0;
 do
{scanf("%c",&x);
if (x=='T') break;
scanf("%d %d %d %d",&n,&w,&h,&l);
getchar();
 s=s+cost(x,n,w,h,l);
}while (1);
 printf("Total cost: $%.2lf",s);
 return 0;}
