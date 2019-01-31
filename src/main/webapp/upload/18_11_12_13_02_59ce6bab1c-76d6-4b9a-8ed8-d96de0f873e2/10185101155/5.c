#include <stdio.h>
int main()
{
    char m;
    int a,b,c,d=0;
    double price ,total,cost= 0;
    while(scanf("%c",&m)&&m!='T')
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        switch(m)
        {
            case 'P':price = 0.89, printf("%d %d*%d*%d Pine, Cost: $",a,b,c,d);break;
            case 'F':price = 1.09, printf("%d %d*%d*%d Fire, Cost: $",a,b,c,d);break;
            case 'C':price = 2.26, printf("%d %d*%d*%d Cedar, Cost: $",a,b,c,d);break;
            case 'M':price = 4.50, printf("%d %d*%d*%d Maple, Cost: $",a,b,c,d);break;
            case 'O':price = 3.10, printf("%d %d*%d*%d Oak, Cost: $",a,b,c,d);break;
            default:break;
        }
        cost = a*b*c*d/12.0*price;
        printf("%.2lf\n",cost);
        total += cost;
        getchar();
    }
        printf("Total cost: $%.2lf",total);
        return 0;
}