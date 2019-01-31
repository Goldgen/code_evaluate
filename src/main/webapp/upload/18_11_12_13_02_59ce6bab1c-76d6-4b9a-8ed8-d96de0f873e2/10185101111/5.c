#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
double price(char kind,double piece,double width,double height,double length){
    double squre=width*height*length/12;
    double price;
    switch(kind){
        case 'P':price=squre*0.89*piece;
        printf("%.0f %.0f*%.0f*%.0f Pine, Cost: $%.2f",piece,width,height,length,price);
        break;
        case 'F':price=squre*1.09*piece;
        printf("%.0f %.0f*%.0f*%.0f Fire, Cost: $%.2f",piece,width,height,length,price);
        break;
        case 'C':price=squre*2.26*piece;
        printf("%.0f %.0f*%.0f*%.0f Cedar, Cost: $%.2f",piece,width,height,length,price);
        break;
        case 'M':price=squre*4.50*piece;
        printf("%.0f %.0f*%.0f*%.0f Maple, Cost: $%.2f",piece,width,height,length,price);
        break;
        case 'O':price=squre*3.10*piece;
        printf("%.0f %.0f*%.0f*%.0f Oak, Cost: $%.2f",piece,width,height,length,price);
        break;
        default:break;
    }
    return price;
}
int main()
{
    char kind;
    double Total_cost=0.0;
    double piece,width,height,length;
    scanf("%c",&kind);
    while(toupper(kind)!='T'){
    scanf(" %lf %lf %lf %lf",&piece,&width,&height,&length);
        getchar();
        Total_cost+=price(kind,piece,width,height,length);
        printf("\n");
        scanf("%c",&kind);
    }
    printf("Total cost: $%.2f",Total_cost);
}
