#include <stdio.h>
#include <stdlib.h>

double cost(int w,int h,int l,char kind){
    double board,sum=0.0,price=0;
    board=1.0*w*h*l/12;
    switch(kind){
        case 'P':price=0.89;break;
        case 'F':price=1.09;break;
        case 'C':price=2.26;break;
        case 'M':price=4.50;break;
        case 'O':price=3.10;break;
        default:break;}
    sum=price*board;
    return sum;
}

void name(char kind){
        switch(kind){
        case 'P':printf("Pine");break;
        case 'F':printf("Fire");break;
        case 'C':printf("Cedar");break;
        case 'M':printf("Maple");break;
        case 'O':printf("Oak");break;
		default:break;}
        return;
}

int main()
{
    double sum_money=0.0;
    while(1){
        char kind;
        int num,w,h,l;
        double sum=0.0;
        scanf("%c",&kind);
        if(kind=='T')
            break;
        scanf("%d %d %d %d",&num,&w,&h,&l);
        getchar();
        sum=cost(w,h,l,kind);
        sum_money+=sum*num;
        printf("%d %d*%d*%d ",num,w,h,l);
        name(kind);
        printf(", Cost: $%.2lf\n",sum*num);
    }
    printf("Total cost: $%.2lf",sum_money);
    return 0;
}
