#include <stdio.h>

double pay(int n,int w,int h,int l,char m);
int main()
{
    int n,w,h,l;
    double total=0.0l;
    char m;
    do
    {
        scanf("%c",&m);
        if(m=='T')
        {
            printf("Total cost: $%.2lf",total);
            break;
        }
        else
        {
            scanf(" %d %d %d %d",&n,&w,&h,&l);
            total+=pay(n,w,h,l,m);
        }
    }while(1);
    return 0;
}
double pay(int n,int w,int h,int l,char m)
{
    double cost=0.0l;
    switch(m)
            {
            case 'P':
                cost=0.89*n*w*h*l/12;
                printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",n,w,h,l,cost);
                break;
            case 'F':
                cost=1.09*n*w*h*l/12;
                printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",n,w,h,l,cost);
                break;
            case 'C':
                cost=2.26*n*w*h*l/12;
                printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",n,w,h,l,cost);
                break;
            case 'M':
                cost=4.50*n*w*h*l/12;
                printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",n,w,h,l,cost);
                break;
            case 'O':
                cost=3.10*n*w*h*l/12;
                printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",n,w,h,l,cost);
                break;
            }
            return cost;
}
