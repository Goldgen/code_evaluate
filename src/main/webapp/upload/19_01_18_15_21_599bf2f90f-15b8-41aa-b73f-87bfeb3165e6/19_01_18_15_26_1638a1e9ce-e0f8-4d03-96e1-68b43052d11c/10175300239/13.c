#include <stdio.h>

int main()
{
    int m,d,y;
    scanf("%d %d %d",&m,&d,&y);
    switch(d){
    case 1:case 21:case 31:
        printf("%dst ",d);break;
    case 2:case 22:
        printf("%dnd ",d);break;
    case 3:case 23:
        printf("%drd ",d);break;
    default:
        printf("%dth ",d);break;
    }
    if(m==1)
        printf("January");
    else if(m==2)
        printf("February");
    else if(m==3)
        printf("March");
    else if(m==4)
        printf("April");
    else if(m==5)
        printf("May");
    else if(m==6)
        printf("June");
    else if(m==7)
        printf("July");
    else if(m==8)
        printf("August");
    else if(m==9)
        printf("September");
    else if(m==10)
        printf("October");
    else if(m==11)
        printf("November");
    else if(m==12)
        printf("December");
    printf(" %d",y);
    return 0;
}