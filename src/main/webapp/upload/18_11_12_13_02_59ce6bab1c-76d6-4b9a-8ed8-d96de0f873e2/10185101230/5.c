#include <stdio.h>
#include <stdlib.h>
double multiply(int a,int b,int c,int d){
    return a*b*c*d/12;
}
float kind(char x){
switch(x){
    case 'P':return 0.89; break;
    case 'F':return 1.09; break;
    case 'C':return 2.26; break;
    case 'M':return 4.50; break;
    case 'O':return 3.10; break;
    default:break;}
}
int main()
{
    double t1=0;
    double t2=0;
    double t3=0;
    double t4=0;
    double t5=0;
    double t=0;
    int a1,b1,c1,d1;
    char m;
    scanf("%c",&m);
    while ( m != 'T'){
            scanf("%d %d %d %d",&a1,&b1,&c1,&d1);
    if(m=='P'){  t1=kind(m)*multiply(a1,b1,c1,d1);
    t+=t1;
            printf("%d %d*%d*%d Pine, Cost: $%.2f\n",a1,b1,c1,d1,t1);}
    if(m=='F'){  t2=kind(m)*multiply(a1,b1,c1,d1);
    t+=t2;
            printf("%d %d*%d*%d Fire, Cost: $%.2f\n",a1,b1,c1,d1,t2);}
    if(m=='C'){  t3=kind(m)*multiply(a1,b1,c1,d1);
    t+=t3;
            printf("%d %d*%d*%d Cedar, Cost: $%.2f\n",a1,b1,c1,d1,t3);}
    if(m=='M'){  t4=kind(m)*multiply(a1,b1,c1,d1);
    t+=t4;
            printf("%d %d*%d*%d Maple, Cost: $%.2f\n",a1,b1,c1,d1,t4);}
    if(m=='O'){  t5=kind(m)*multiply(a1,b1,c1,d1);
    t+=t5;
            printf("%d %d*%d*%d Oak, Cost: $%.2f\n",a1,b1,c1,d1,t5);}
       scanf(" %c",&m);
    }
   printf("Total cost: $%.2f\n",t);

return 0;}
