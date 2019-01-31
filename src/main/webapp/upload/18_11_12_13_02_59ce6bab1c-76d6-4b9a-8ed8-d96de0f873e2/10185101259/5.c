#include <stdio.h>
#include <stdlib.h>

int main()
{  double Pine=0.89,Fire=1.09,Cedar=2.26,Maple=4.50,Oak=3.10;
    double price,pp,pf,pc,pm,po,s;
    double i,l,w,h;
    char a;
    while(scanf("%c",&a)&&a!='T')
   { scanf("%lf %lf %lf %lf",&i,&l,&w,&h);
   s=(l*w*h*i)/12;
    switch(a)
    {
    case 'P':
        pp=s*Pine;
        printf("%.0lf %.0lf*%.0lf*%.0lf Pine, Cost: $%.2lf\n",i,l,w,h,pp);
        price+=pp;
        break;
    case 'F':
        pf=s*Fire;
        printf("%.0lf %.0lf*%.0lf*%.0lf Fire, Cost: $%.2lf\n",i,l,w,h,pf);
        price+=pf;
        break;
    case 'C':
        pc=s*Cedar;
        printf("%.0lf %0.lf*%.0lf*%.0lf Cedar, Cost: $%.2lf\n",i,l,w,h,pc);
        price+=pc;
        break;
    case 'M':
        pm=s*Maple;
        printf("%.0lf %.0lf*%.0lf*%.0lf Maple, Cost: $%.2lf\n",i,l,w,h,pm);
        price+=pm;
        break;
    case 'O':
        po=s*Oak;
        printf("%.0lf %.0lf*%.0lf*%.0lf Oak, Cost: $%.2lf\n",i,l,w,h,po);
        price+=po;
        break;
        default:
        break;
    }
    }
        printf("Total cost: $%.2lf",price);
    return 0;
}
