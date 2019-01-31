#include <stdio.h>
double a(char nam,int num,int wid,int hig,int lon);
int main()
{
    int num,wid,hig,lon;
    char nam;
    double sum=0;
    while(scanf("%c",&nam)&&nam!='T')
    {
        scanf("%d %d %d %d",&num,&wid,&hig,&lon);
        sum+=a(nam,num,wid,hig,lon);
    }
    printf("Total cost: $%.2f",sum);
    return 0;
}
double a(char nam,int num,int wid,int hig,int lon)
{
    double cos=0;
    switch(nam){
    case 'P':
        cos=num*wid*hig*lon*0.89/12;
        printf("%d %d*%d*%d Pine, Cost: $%.2f\n",num,wid,hig,lon,cos);
        break;
    case 'F':
        cos=num*wid*hig*lon*1.09/12;
        printf("%d %d*%d*%d Fire, Cost: $%.2f\n",num,wid,hig,lon,cos);
        break;
    case 'C':
        cos=num*wid*hig*lon*2.26/12;
        printf("%d %d*%d*%d Cedar, Cost: $%.2f\n",num,wid,hig,lon,cos);
        break;
    case 'M':
        cos=num*wid*hig*lon*4.50/12;
        printf("%d %d*%d*%d Maple, Cost: $%.2f\n",num,wid,hig,lon,cos);
        break;
    case 'O':
        cos=num*wid*hig*lon*3.10/12;
        printf("%d %d*%d*%d Oak, Cost: $%.2f\n",num,wid,hig,lon,cos);
        break;
    }
    return cos;
}