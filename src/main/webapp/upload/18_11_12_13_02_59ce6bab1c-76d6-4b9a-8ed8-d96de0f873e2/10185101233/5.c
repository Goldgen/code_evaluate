#include<stdio.h>
double result(char a,double b,double c,double d,double e)
{
    double f;
    switch(a)
    {
        case'P':
            f=0.89;
            break;
        case'F':
            f=1.09;
            break;
        case'C':
            f=2.26;
            break;
        case'M':
            f=4.50;
            break;
        case'O':
            f=3.10;
            break;
        default:
            break;
    }
    return f*b*c*d*e;
}
int main()
{
    char x;
    double sum=0;
    int i,j,k,l;
    scanf("%c",&x);
    while(x!='T')
    {
        scanf("%d%d%d%d",&i,&j,&k,&l);
        double b=result(x,i,j,k,l);
        printf("%d %d*%d*%d ",i,j,k,l);
        switch(x)
        {
            case'P':
            printf("Pine, Cost:$%.2lf",b/12);
            sum+=b;
            break;
            case'F':
            printf("Fire, Cost:$%.2lf",b/12);
            sum+=b;
            break;
            case'C':
            printf("Cedar, Cost:$%.2lf",b/12);
            sum+=b;
            break;
            case'M':
            printf("Maple, Cost:$%.2lf",b/12);
            sum+=b;
            break;
            case'O':
            printf("Oak, Cost:$%.2lf",b/12);
            sum+=b;
            break;
            default:
            break;
        }
        printf("\n");
		getchar();
        scanf("%c",&x);
    }
    if(x=='T')
    {
        printf("Total cost: $%.2lf",sum/12);
    }
    return 0;
}