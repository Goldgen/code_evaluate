#include<stdio.h>

double cal(char,int,int,int,int);

int main(void)
{
    char type = 0;
    int quantity = 0;
    int width = 0;
    int length = 0;
    int height = 0;
    double total = 0;

    scanf("%c",&type);
    while(type != 'T')
    {
        scanf("%d %d %d %d",&quantity,&width,&length,&height);
        total += cal(type,quantity,width,length,height);
        switch(type)
        {
            case('P'):
                printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",
                       quantity,width,length,height,cal(type,quantity,width,length,height));
                break;
            case('F'):
                printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",
                       quantity,width,length,height,cal(type,quantity,width,length,height));
                break;
            case('C'):
                printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",
                       quantity,width,length,height,cal(type,quantity,width,length,height));
                break;
            case('M'):
                printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",
                       quantity,width,length,height,cal(type,quantity,width,length,height));
                break;
            case('O'):
                printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",
                       quantity,width,length,height,cal(type,quantity,width,length,height));
                break;
            default:
                break;
        }

        getchar();
        scanf("%c",&type);
    }
    printf("Total cost: $%.2lf",total);
}

double cal(char a,int b,int c,int d,int e)
{
    double price = 0;
    switch(a)
    {
    case('P'):
        price = 0.89;
        break;
    case('F'):
        price = 1.09;
        break;
    case('C'):
        price = 2.26;
        break;
    case('M'):
        price = 4.50;
        break;
    case('O'):
        price = 3.10;
        break;
    default:
        break;
    }
    return price * b * c * d * e / 12;
}
