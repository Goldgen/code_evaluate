#include<stdio.h>
#include <math.h>
int main()
{
    char kind=0;
    int quantity,width,height,length;
	double cost=0,sum=0;
    do{
        scanf("%c",&kind);
        switch (kind)
    	{
        case 'P':
            scanf("%d %d %d %d",&quantity,&width,&height,&length);
            cost=quantity*width*height*length*0.89/12.0;
            sum+=cost;
            printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",quantity,width,height,length,cost);
            break;
        case 'F':
            scanf("%d %d %d %d",&quantity,&width,&height,&length);
            cost=quantity*width*height*length*1.09/12.0;
            sum+=cost;
            printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",quantity,width,height,length,cost);
            break;
        case 'C':
            scanf("%d %d %d %d",&quantity,&width,&height,&length);
            cost=quantity*width*height*length*2.26/12.0;
            sum+=cost;
            printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",quantity,width,height,length,cost);
            break;
        case 'M':
            scanf("%d %d %d %d",&quantity,&width,&height,&length);
            cost=quantity*width*height*length*4.50/12.0;
            sum+=cost;
            printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",quantity,width,height,length,cost);
            break;
        case 'O':
            scanf("%d %d %d %d",&quantity,&width,&height,&length);
            cost=quantity*width*height*length*3.10/12.0;
            sum+=cost;
            printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",quantity,width,height,length,cost);
            break;
        case 'T':
            printf("Total cost: $%.2f\n",sum);
            break;
        default:
            break;
    	}  
    }while(kind!='T');  
    return 0;
}