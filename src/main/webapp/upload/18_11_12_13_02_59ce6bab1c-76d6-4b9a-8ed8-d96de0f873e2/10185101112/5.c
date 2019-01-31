#include <stdio.h>

double board(int w,int h,int l){
    return (double)w*h*l/12;
}
int main(){
    int num,w,h,l;
    char type;
    double price,price_total,total=0.0;

    do{
    type=getchar();
    if (type=='T') break;
    scanf(" %d %d %d %d",&num,&w,&h,&l);
    printf("%d %d*%d*%d ",num,w,h,l);    
    
    switch(type){
    case 'P':price=0.89;printf("Pine");break;
    case 'F':price=1.09;printf("Fire");break;
    case 'C':price=2.26;printf("Cedar");break;
    case 'M':price=4.50;printf("Maple");break;
    case 'O':price=3.10;printf("Oak");break;
    default:break;
    }
    
    price_total=price*num*board(w,h,l)+1e-6;
    total=total+price_total;
    printf(", Cost: $%.2lf\n",price_total);
    getchar();
    }while(type!='T');
    printf("Total cost: $%.2lf",total);
    return 0;
}
