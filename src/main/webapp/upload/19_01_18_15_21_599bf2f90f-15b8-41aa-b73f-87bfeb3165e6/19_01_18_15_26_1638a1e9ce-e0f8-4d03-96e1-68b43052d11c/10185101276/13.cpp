#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);//????
    if (b==1||b==21||b==31)
        printf("%dst ",b);
    else if(b==2||b==22)
        printf("%dnd ",b);
    else if(b==3||b==13||23==b)
        printf("%drd ",b);
    else printf("%dth ",b);//????
    switch(a){
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
    default:
        printf("December");
        break;}//????
    printf(" %d",c);//????
    return 0;
}
