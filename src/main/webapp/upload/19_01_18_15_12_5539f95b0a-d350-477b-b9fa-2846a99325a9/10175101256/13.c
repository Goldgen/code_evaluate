#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&b,&a,&c);
    printf("%d",a);
    if(a/10==1)
        printf("th ");
    else if(a%10==1)
        printf("st ");
    else if(a%10==2)
        printf("nd ");
    else if(a%10==3)
        printf("rd ");
    else
        printf("th ");
    switch(b){
            case 1:
        printf("January");
        break;
            case 2:
        printf("February");
        break;
            case 3:
        printf("March");
        break;
            case 4:
        printf("April");
        break;
            case 5:
        printf("May");
        break;
            case 6:
        printf("June");
        break;
            case 7:
        printf("July");
        break;
            case 8:
        printf("August");
        break;
            case 9:
        printf("September");
        break;
            case 10:
        printf("October");
        break;
            case 11:
        printf("November");
        break;
            case 12:
        printf("December");
        break;
            default:
                break;
    }
    printf(" %d",c);
}