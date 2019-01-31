#include<stdio.h>
int main()
{
    int y,m,d;
    scanf("%d%d%d",&m,&d,&y);

    printf("%d",d);
    if(d==11||d==12||d==13)printf("th ");
    else if(d%10==1)printf("st ");
    else if(d%10==2)printf("nd ");
    else if(d%10==3)printf("rd ");
    else printf("th ");

    if(m==1)printf("January");
    else if(m==2)printf("February");
    else if(m==3)printf("March");
    else if(m==4)printf("April");
    else if(m==5)printf("May");
    else if(m==6)printf("June");
    else if(m==7)printf("July");
    else if(m==8)printf("August");
    else if(m==9)printf("September");
    else if(m==10)printf("October");
    else if(m==11)printf("November");
    else printf("December");

    printf(" %d",y);
    return 0;
}
