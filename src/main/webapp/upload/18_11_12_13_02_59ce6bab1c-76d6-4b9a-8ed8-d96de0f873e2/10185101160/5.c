#include<stdio.h>
#include<string.h>
	char ch/*木材简称*/;
	char tree[10]/*木材全名*/;
	double n=0/*数量*/, w=0/*宽度*/, h=0/*高度*/, f=0/*厚度*/, s=0/*板英尺*/;
	double m=0/*单价*/, cost=0/*一种木材总成本*/, total=0/*所有木财总成本*/;			
void Turn()	//木材简称转全名函数 
{
	switch(ch)
	{
		case 'P':	strcpy(tree,"Pine");	m = 0.89 ;	break;
		case 'F':	strcpy(tree,"Fire");	m = 1.09 ;	break;
		case 'C':	strcpy(tree,"Cedar"); 	m = 2.26 ;	break;
		case 'M':	strcpy(tree,"Maple"); 	m = 4.50 ;	break;
		case 'O':	strcpy(tree,"Oak"); 	m = 3.10 ;	break;
		default:	break;
	}
}
void count()	//成本计算函数 
{
	s = ( n * w * h * f ) / 12 ;	//换算板英尺 
	cost= m * s ;	//该种木材总价格 
	printf("%.0lf %.0lf*%.0lf*%.0lf %s, Cost: $%.2lf\n",n,w,h,f,tree,cost);
	total += cost ;
}
int main()
{	
	while(1)
	{
		scanf("%c",&ch);
		getchar();
		if( ch == 'T')
		{
			printf("Total cost: $%.2lf",total);
			break;
		}
		else
		{
			Turn();		//调用木材简称转全名函数 
			scanf("%lf%lf%lf%lf",&n,&w,&h,&f);
			getchar();
			count();	//调用成本计算函数		
		}		
	}				
	return 0;
}
