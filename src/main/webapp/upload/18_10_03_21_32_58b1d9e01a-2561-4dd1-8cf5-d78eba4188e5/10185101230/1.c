#include<stdio.h>
#include <math.h>

main()
{
int d; //Description
int p; //pay monthly
int r;


scanf("%d",&d);
scanf("%d",&p);
scanf("%d",&r);


float n;
n=log(p/(p-d*0.01*r))/log(1+0.01*r);
n=n+0.5;
n=n*100;
int m=(int) n/100;

printf("%d",m);


return 0;
}
