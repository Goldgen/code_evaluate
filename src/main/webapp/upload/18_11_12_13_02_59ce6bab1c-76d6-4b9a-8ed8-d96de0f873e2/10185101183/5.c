#include <stdio.h>
#include <stdlib.h>
double Post(char d,int a,int b,int c);
int main()
{
    char a;int b,c,d,e;double f;
    double total=0;
    for( ; ;)
    {
    scanf("%c",&a);
    if(a=='T')
        break;
    scanf("%d %d %d %d",&b,&c,&d,&e);
    getchar();
    printf("%d %d*%d*%d ",b,c,d,e);
     if(a=='P')
            printf("Pine, ");
        else if(a=='F')
            printf("Fire, ");
        else if(a=='C')
            printf("Cedar, ");
        else if(a=='M')
            printf("Maple, ");
        else if(a=='O')
            printf("Oak, ");
            f=b*Post(a,c,d,e);
            total+=f;
     printf("Cost: $%.2lf\n",f);
    }
    printf("Total cost: $%.2lf",total);

}
double Post(char d,int a,int b,int c)
{
    double e=a*b*c/12.0000;
    if(d=='P')
        return 0.89*e;
    if(d=='F')
        return 1.09*e;
    if(d=='C')
        return 2.26*e;
    if(d=='M')
        return 4.50*e;
    if(d=='O')
        return 3.10*e;
}

