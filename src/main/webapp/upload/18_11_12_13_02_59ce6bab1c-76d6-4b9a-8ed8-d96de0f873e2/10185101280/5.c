#include <stdio.h>
#include <stdlib.h>

int main()
{   float Pine=0.89,Fire=1.09,Cedar=2.26,Maple=4.50,Oak=3.10;
    double price,pi,fi,ce,ma,oa,s;
    double i,l,w,h;
    char a;
    while(scanf("%c",&a)&&a!='T')
   { scanf("%lf %lf %lf %lf",&i,&l,&w,&h);
   s=l*w*h*i/12;
    switch(a)
    {case 'P':
    pi=s*Pine;
    printf("%.0lf %.0lf*%.0lf*%.0lf Pine, Cost: $%.2lf\n",i,l,w,h,pi);
    price+=pi;
    break;
    case 'F':
    fi=s*Fire;
    printf("%.0lf %.0lf*%.0lf*%.0lf Fire, Cost: $%.2lf\n",i,l,w,h,fi);
    price+=fi;
    break;
    case 'C':
    ce=s*Cedar;
    printf("%.0lf %0.lf*%.0lf*%.0lf Cedar, Cost: $%.2lf\n",i,l,w,h,ce);
    price+=ce;
    break;
    case 'M':
    ma=s*Maple;
    printf("%.0lf %.0lf*%.0lf*%.0lf Maple, Cost: $%.2lf\n",i,l,w,h,ma);
    price+=ma;
    break;
    case 'O':
    oa=s*Oak;
    printf("%.0lf %.0lf*%.0lf*%.0lf Oak, Cost: $%.2lf\n",i,l,w,h,oa);
    price+=oa;
    break;
    default:
    break;
    }
    }
        printf("Total cost: $%.2lf",price);
    return 0;
}
