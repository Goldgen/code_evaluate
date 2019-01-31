#include<stdio.h>
double suan(char x,int a,int b,int c,int d)
{  double sum;
	switch (x){
 case 'P': sum=(a*b*c*d*0.89)/12;break;
 case 'F': sum=(a*b*c*d*1.09)/12;break;
 case 'C': sum=(a*b*c*d*2.26)/12;break;
 case 'M': sum=(a*b*c*d*4.50)/12;break;
 case 'O': sum=(a*b*c*d*3.10)/12;break;
 default: break;}
 if(x=='P')
	  printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",a,b,c,d,sum);
 else if(x=='F')
	 printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",a,b,c,d,sum);
  else if(x=='C')
	 printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",a,b,c,d,sum);
  else if(x=='M')
	 printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",a,b,c,d,sum);
  else if(x=='O')
	 printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",a,b,c,d,sum);
 return sum;
}
int main()
{
	double totalsum=0.00; 
	char x;
	scanf("%c",&x);
    while(1)
	{
	    int a,b,c,d;
		if(x=='T')
			break;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		double sum=suan(x,a,b,c,d);
		totalsum += sum;
		getchar();
	    scanf("%c",&x);
	}
	printf("Total cost: $%.2lf\n",totalsum);

    return 0;
}
