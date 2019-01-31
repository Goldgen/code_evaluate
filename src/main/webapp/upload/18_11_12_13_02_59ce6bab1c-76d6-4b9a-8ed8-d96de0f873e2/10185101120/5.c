#include<stdio.h>
int main()
{
	int n[100],x[100],y[100],z[100],i=0,b[100],v;
	long double T=0,cost,one;
	char c;
	c=getchar();
	while (c!= 'T' ){
	    b[i]=c;
		scanf ("%d %d %d %d",&n[i],&x[i],&y[i],&z[i]);
		i++;
		c=getchar ();
		c=getchar ();
	}
	for (int m=0;m<i;m+=1){
		v=x[m]*y[m]*z[m];
		printf ("%d %d*%d*%d",n[m],x[m],y[m],z[m]);
		switch (b[m]){
			case 'P' :{
				one = 0.89;
				printf (" Pine, ");
				break;
			}
			case 'F' :{
				one = 1.09;
				printf (" Fire, ");
				break;
			}
			case 'C' :{
				one =2.26;
				printf (" Cedar, ");
				break;
			}
			case 'M' :{
				one = 4.5;
				printf (" Maple, ");
				break;
			}
			case 'O' :{
				one = 3.1;
				printf (" Oak, ");
				break;
			}
		}
		cost = one*n[m]*v/12.0;
		T+=cost;
		printf ("Cost: $%.2llf\n",cost);
	}
	printf ("Total cost: $%.2llf",T);
}