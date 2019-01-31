#include <stdio.h>
#include <stdlib.h>
#define con 12;

double fucost(char le,int a,int b,int c,int d)
{
    double pri = 0;
    double cost = 0;

    pri = le=='P'? 0.89:(le=='F'? 1.09:(le=='C'? 2.26:(le=='M'? 4.50:3.10)));
    cost = pri * a * b * c * d / con;
    if(le=='P')
        printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",a,b,c,d,cost);
    else if(le=='F')
        printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",a,b,c,d,cost);
    else if(le=='C')
        printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",a,b,c,d,cost);
    else if(le=='M')
        printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",a,b,c,d,cost);
    else if(le=='O')
        printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",a,b,c,d,cost);

    return cost;
}

int main()
{
    char lum ;
    int num = 0, we = 0,he = 0, lo = 0;
    double sum = 0;
    do
    {
        scanf("%c",&lum);
        if(lum=='T')
            break;
        scanf("%d %d %d %d",&num,&we,&he,&lo);
        getchar();
        sum += fucost(lum,num,we,he,lo);

    }while(1);
    printf("Total cost: $%.2lf",sum);
    return 0;
}
