#include<stdio.h>

int ex(char kind){

    int a;

    switch(kind)

    {

    case 'P':

        a=0; break;

    case 'F':

        a=1; break;

    case 'C':

        a=2; break;

    case 'M':

        a=3; break;

    case 'O':

        a=4; break;

    default:

        break;

    }

    return a;

}

int main()

{

    double l,h,w,n,sum=0,cost;

    char kind;

    double per[5]={0.89,1.09,2.26,4.50,3.10};

    char *str[5]={"Pine","Fire","Cedar","Maple","Oak"};

    for(;;)

    {

        kind=getchar();

        if(kind=='T')

            break;

        scanf("%lf %lf %lf %lf",&n,&l,&w,&h);

        getchar();

        cost=n*l*w*h*per[ex(kind)]/12;

        sum+=cost;

        printf("%.0lf %.0lf*%.0lf*%.0lf %s, Cost: $%.2lf\n",

            n,l,w,h,str[ex(kind)],cost);

    }

    printf("Total cost: $%.2lf",sum);

    return 0;

}