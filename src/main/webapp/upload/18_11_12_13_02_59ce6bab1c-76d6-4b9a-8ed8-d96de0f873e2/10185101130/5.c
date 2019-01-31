#include <stdio.h>
#include <stdlib.h>
//注意char型，int型，double型变化；输入的用法；
double price(char lumber,int number,int width,int height,int length)
{
    double board_feet = (width * height * length) / 12.0;//计算每个的板英寸，且单位直接化为英寸；
    double total_board_feet = number * board_feet;//计算总共多大；
    double lumber_num;//lumber对应的价位；
    if(lumber == 'P')
        lumber_num = 0.89;
    else if(lumber == 'F')
        lumber_num = 1.09;
    else if(lumber == 'C')
        lumber_num = 2.26;
    else if(lumber == 'M')
        lumber_num = 4.50;
    else
        lumber_num = 3.10;
    double price_part = lumber_num * total_board_feet;//计算单品的价格；
    return price_part;
}

int main()
{
    char lumber;
    int  number,width,height,length;
    double cost = 0.0;
    scanf("%c", &lumber);
    while(lumber!='T')
    {
        scanf("%d %d %d %d",&number,&width,&height,&length);
        double cost_part = price(lumber,number,width,height,length);//计算每次的价格；
        cost += cost_part;//计算总价；
        if(lumber == 'P')
            printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",number,width,height,length,cost_part);
        else if(lumber == 'F')
            printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",number,width,height,length,cost_part);
        else if(lumber == 'C')
            printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",number,width,height,length,cost_part);
        else if(lumber == 'M')
            printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",number,width,height,length,cost_part);
        else if(lumber == 'O')
            printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",number,width,height,length,cost_part);
        scanf("%c%c", &lumber, &lumber);
    }
    printf("Total cost: $%.2lf",cost);
    return 0;
}
