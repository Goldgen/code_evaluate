#include <stdio.h>
#include <ctype.h>

double pay(int n,int a,int b,int c,char m)
{
    double cost=0.0;
switch(m){
case 'P':
cost=0.89*n*a*b*c/12;
printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",n,a,b,c,cost);
break;
case 'M':
cost=4.50*n*a*b*c/12;
    printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",n,a,b,c,cost);
    break;
case 'F':
cost=1.09*n*a*b*c/12;
    printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",n,a,b,c,cost);
    break;
case 'C':
cost=2.26*n*a*b*c/12;
    printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",n,a,b,c,cost);
    break;
case 'O':
cost=3.10*n*a*b*c/12;
    printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",n,a,b,c,cost);
    break;
	default:
		break;
}
return cost;
}


int main()
{
int n,a,b,c;
double totalcost=0.0;
char m;
do{
scanf("%c",&m);
    if(m=='T'){
    printf("Total cost: $%.2lf",totalcost);
    break;}
    else{
    scanf(" %d %d %d %d",&n,&a,&b,&c);
    totalcost+=pay(n,a,b,c,m);
    }}while(1);

 return 0;
}
