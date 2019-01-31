#include<stdio.h>
#include<math.h>
double cost(char,int,int,int,int);

int main(void)
{
    double all=0;
    int num=0,l=0,w=0,h=0;
    char type=0;
    while(type!='T'){
        type=getchar();
        if(type!='T'){
            scanf("%d %d %d %d",&num,&w,&h,&l);
            printf("%d %d*%d*%d ",num,w,h,l);
            switch(type){
                case 'P':printf("Pine");break;
                case 'F':printf("Fire");break;
                case 'C':printf("Cedar");break;
                case 'M':printf("Maple");break;
                default:printf("Oak");break;
            }
            printf(", Cost: $%.2lf\n",cost(type,num,w,h,l));
            getchar();
            all+=cost(type,num,w,h,l);
        }
        else
            printf("Total cost: $%.2lf",all);
    }
    return 0;
}

double cost(char a,int b,int c,int d,int e)
{
    double price=0;
    switch(a){
        case 'P':price=0.89;break;
        case 'F':price=1.09;break;
        case 'C':price=2.26;break;
        case 'M':price=4.50;break;
        default:price=3.10;break;
    }
    return price*b*c*d*e/12.0;
}
