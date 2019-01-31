#include<stdio.h>
void cost(char x,int a,int b,int c,int d);
double x1,x2,x3,x4,x5,result;
int main()
{
    x1=x2=x3=x4=x5=result=0;
    char a;
    int b,c,d,e;
    while(1)
    {
        scanf("%c",&a);
        if(a=='T')
        {
            printf("Total cost: $%.2lf",result);
            break;
        }
        else
        {
        scanf(" %d %d %d %d",&b,&c,&d,&e);
        cost(a,b,c,d,e);
        }
    }
    return 0;
}
void cost(char x,int a,int b,int c,int d)
{
    double e ;
    e = (double)a*(double)b*(double)c*(double)d/12.0;
    switch(x)
    {
    case 'P':
        x1=e*0.89;
        printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",a,b,c,d,x1);
        result +=x1;
        break;
    case 'F':
        x2=e*1.09;
        printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",a,b,c,d,x2);
        result +=x2;
        break;
    case 'C':
        x3=e*2.26;
        printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",a,b,c,d,x3);
        result +=x3;
        break;
    case 'M':
        x4=e*4.50;
         printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",a,b,c,d,x4);
         result +=x4;
         break;
    case 'O':
        x5=e*3.10;
        printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",a,b,c,d,x5);
        result +=x5;
        break;
    default: break;
    }
}
