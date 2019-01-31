#include <stdio.h>

double price(char x,int a,int b,int c,int d);

int main()
{
    char item;
    int number,width,height,length;
    double total=0.0;
    double itemcost;
    scanf("%c",&item);
    while(item!='T'){
        scanf("%d %d %d %d",&number,&width,&height,&length);
        printf("%d %d*%d*%d ",number,width,height,length);
        itemcost=price(item,number,width,height,length);
        printf(", Cost: $%.2lf\n",itemcost);
        total+=itemcost;
        getchar();
        scanf("%c",&item);
    }
    printf("Total cost: $%.2lf",total);
    return 0;
}

double price(char x,int a,int b,int c,int d){
    double cost=1.0;
    double per;
    switch(x){
    case 'P':
        printf("Pine");
        per=0.89;
        break;
    case 'F':
        printf("Fire");
        per=1.09;
        break;
    case 'C':
        printf("Cedar");
        per=2.26;
        break;
    case 'M':
        printf("Maple");
        per=4.50;
        break;
    default:
        printf("Oak");
        per=3.10;
        break;
    }
    cost=a*b/12.0*c*d*per;
    return cost;
}