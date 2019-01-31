#include <stdio.h>
int main()
{
    char ch;
    double a,b,c,d,e,f,g=0;
    scanf("%c",&ch);
    while(ch!='T')
    {scanf("%lf %lf %lf %lf",&a,&b,&c,&e);
    getchar();
    printf("%.0f %.0f*%.0f*%.0f ",a,b,c,e);
    if(ch=='P')
        {d=0.89;
        printf("Pine, ");}
    if(ch=='F')
        {d=1.09;
        printf("Fire, ");}
    if(ch=='C')
        {d=2.26;
        printf("Cedar, ");}
    if(ch=='M')
        {d=4.50;
        printf("Maple, ");}
    if(ch=='O')
        {d=3.10;
        printf("Oak, ");}
        f=d*a*b*c*e/12;
        g+=f;
        printf("Cost: $%.2f\n",f);
        scanf("%c",&ch);}
        printf("Total cost: $%.2f",g);
}