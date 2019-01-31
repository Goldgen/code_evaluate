#include <stdio.h>
#include <stdlib.h>
#define Pine  0.89
#define Fire  1.09
#define Cedar 2.26
#define Maple 4.50
#define Oak   3.10
#define NUMBER 12.0
#define PER ", Cost: $"
#define TOTAL "Total cost: $"

int main()
{
    char ch;
    int a,b,c,d;
    double m,sum,per_price;
    while(scanf("%c",&ch)==1){
        if(ch=='T')
        break;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        getchar();
        printf("%d %d*%d*%d ",a,b,c,d);
        if(ch=='P'){
            printf("Pine");
            per_price=Pine;
        }
        else if(ch=='F'){
            printf("Fire");
            per_price=Fire;
        }
        else if(ch=='C'){
            printf("Cedar");
            per_price=Cedar;
        }
        else if(ch=='M'){
            printf("Maple");
            per_price=Maple;
        }
        else if(ch=='O'){
            printf("Oak");
            per_price=Oak;
        }
        printf("%s",PER);
        m=a*b*c*d*per_price/NUMBER;
        printf("%.2f",m);
        sum+=m;
        printf("\n");
    }
    printf("%s",TOTAL);
    printf("%.2f",sum);
}
