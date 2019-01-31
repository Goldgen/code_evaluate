#include <stdio.h>
#include <stdlib.h>
double pri(char type,double numbers,double width,double height,double length)
{
    double V,price;
    V=width*length*height/12.0;
    switch(type)
    {
    case 'C':
        price=V*2.26*numbers;
        printf("%.0f %.0f*%.0f*%.0f Cedar, Cost: $%.2f\n",numbers,width,height,length,price);
        break;
    case 'F':
        price=V*1.09*numbers;
        printf("%.0f %.0f*%.0f*%.0f Fire, Cost: $%.2f\n",numbers,width,height,length,price);
        break;
    case 'O':
        price=V*3.10*numbers;
        printf("%.0f %.0f*%.0f*%.0f Oak, Cost: $%.2f\n",numbers,width,height,length,price);
        break;
    case 'M':
        price=V*4.5*numbers;
        printf("%.0f %.0f*%.0f*%.0f Maple, Cost: $%.2f\n",numbers,width,height,length,price);
        break;
    case'P':
        price=V*0.89*numbers;
        printf("%.0f %.0f*%.0f*%.0f Pine, Cost: $%.2f\n",numbers,width,height,length,price);
        break;
		default:;
			break;
    }
    return price;
}
int main()
{
    double num,a,b,c,price=0.0;
    char type;
    do
    {
        if(type=='T')
            break;
        scanf("%lf %lf %lf %lf",&num,&a,&b,&c);
        price+=pri(type,num,a,b,c);
    }
    while(scanf("%c",&type)!='T');
    printf("Total cost: $%.2f",price/2);
    return 0;
}

