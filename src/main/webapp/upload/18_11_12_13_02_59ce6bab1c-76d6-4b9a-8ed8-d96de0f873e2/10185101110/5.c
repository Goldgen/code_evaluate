#include<stdio.h>
double x(char);

int main()
{
	double sum=0.0;
	char lb;
	while(1)
	{
	scanf("%c",&lb);
	if(lb=='T')
	{
	
	break;}
	else
	{
		sum=sum+x(lb);
	}
	}
	printf("Total cost: $%.2lf",sum);
	return 0;
 } 
 
 
 
 
 
 double x(char lb)
 {
 	int a,b,c,d;
 	double m;
 	scanf("%d %d %d %d",&a,&b,&c,&d);
getchar();
 	switch(lb){
	 
 	case 'P':
 		m=a*b*c*d/12.0*0.89 ;
 		printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",a,b,c,d,m);
 		break;
 	case 'F':
 		m=a*b*c*d/12.0*1.09 ;
		 printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",a,b,c,d,m);
		 break;
 		
 	case 'C':
 		m=a*b*c*d/12.0*2.26 ;
		 printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",a,b,c,d,m);
		 break;
 	case 'M':
 		m=a*b*c*d/12.0*4.5 ;
		 printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",a,b,c,d,m);
		 break;
 	case 'O':
 		m=a*b*c*d/12.0*3.1 ;
 		printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",a,b,c,d,m);
 		break;
		 default:
		 break;}
 	return m;
 	
 }
 