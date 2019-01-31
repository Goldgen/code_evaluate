#include <stdio.h>
#include <stdlib.h>

double costOnce(char ch,int a,int b,int c,int d);
void woodtype(char wood);

int main(void)
{
    char wood;
    int n,w,h,l;//number,width,height,length
    double tcost=0;
    for(;;){
        if((wood=getchar())=='T'){
            printf("Total cost: $%.2lf",tcost);
            break;
        }
        else{
            scanf(" %d %d %d %d",&n,&w,&h,&l);getchar();
            printf("%d %d*%d*%d ",n,w,h,l);
            woodtype(wood);
            printf(", Cost: $%.2lf\n",costOnce(wood,n,w,h,l));
            tcost+=costOnce(wood,n,w,h,l);
        }
    }
    return 0;
}

double costOnce(char ch,int a,int b,int c,int d){
    double cost,costeach;
    switch(ch)
    {
        case 'P':
            costeach=0.89;
            break;
        case 'F':
            costeach=1.09;
            break;
        case 'C':
            costeach=2.26;
            break;
        case 'M':
            costeach=4.50;
            break;
        default:
            costeach=3.10;
            break;
    }
    cost=a*b*c*d*12*costeach/144+1e-07;
    return cost;
}

void woodtype(char wood){
    switch(wood)
    {
        case 'P': printf("Pine");
            break;
        case 'F': printf("Fire");
            break;
        case 'C': printf("Cedar");
            break;
        case 'M': printf("Maple");
            break;
        default: printf("Oak");
            break;
    }
    return;
}