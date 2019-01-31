#include <stdio.h>
double price(char x);
int type(char x);
int main(void){
    char type;
    double p=0.0;
    scanf("%c ",&type);
    for(;type!='T';scanf("%c ",&type)){
        p = p+price(type);
    }
    printf("Total cost: $%.2lf",p);
    return 0;
}
double price(char x){
    double each,price;
    int amount,width,height,length;
    switch (x){
        case 'P':each=0.89;break;
        case 'F':each=1.09;break;
        case 'C':each=2.26;break;
        case 'M':each=4.50;break;
        case 'O':each=3.10;break;
        default:return 0;
    }
    scanf("%d %d %d %d",&amount,&width,&height,&length);
    price=each*amount*width*length*height/12;
    printf("%d %d*%d*%d ",amount,width,height,length);
    type(x);
    printf(", Cost: $%.2lf\n",price);
    return price;
}
int type(char x){
    switch (x){
        case 'P':printf("Pine");break;
        case 'F':printf("Fire");break;
        case 'C':printf("Cedar");break;
        case 'M':printf("Maple");break;
        case 'O':printf("Oak");break;
        default:break;
    }
    return 1;
}
