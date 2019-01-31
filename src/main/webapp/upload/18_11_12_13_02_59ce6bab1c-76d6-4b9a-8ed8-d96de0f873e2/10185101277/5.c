#include<stdio.h>
#include<math.h>
void price(char a,int n,double i,double j,double k);
double p=0.89;
double f=1.09;
double c=2.26;
double m=4.50;
double o=3.10;
double sum,sum1,sum2,sum3,sum4,sum5;
int main()
{
    char a;
    int n;
    double i,j,k;
    sum=sum1=sum2=sum3=sum4=sum5=0;
    while(1)
    {
        scanf("%c",&a);
        if(a=='T'){printf("Total cost: $%.2lf",sum);break;}
        else
        {
            scanf(" %d %lf %lf %lf",&n,&i,&j,&k);
            price(a,n,i,j,k);
        }
    }
    return 0;
}

void price(char a,int n,double i,double j,double k)
{
    switch(a)
    {
    case 'P' :
        sum1=i*j*k/12*p*n;
        printf("%d %.0lf*%.0lf*%.0lf Pine, Cost: $%.2lf\n",n,i,j,k,sum1);
        sum+=sum1;
        break;
    case 'F' :
        sum2=i*j*k/12*f*n;
        printf("%d %.0lf*%.0lf*%.0lf Fire, Cost: $%.2lf\n",n,i,j,k,sum2);
        sum+=sum2;
        break;
    case 'C' :
        sum3=i*j*k/12*c*n;
        printf("%d %.0lf*%.0lf*%.0lf Cedar, Cost: $%.2lf\n",n,i,j,k,sum3);
        sum+=sum3;
        break;
    case 'M' :
        sum4=i*j*k/12*m*n;
        printf("%d %.0lf*%.0lf*%.0lf Maple, Cost: $%.2lf\n",n,i,j,k,sum4);
        sum+=sum4;
        break;
    case 'O' :
        sum5=i*j*k/12*o*n;
        printf("%d %.0lf*%.0lf*%.0lf Oak, Cost: $%.2lf\n",n,i,j,k,sum5);
        sum+=sum5;
        break;
    default:break;
    }
}
