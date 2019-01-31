#include<stdio.h>
int main(){
	int a,b,c;//c==chicken*3
	const int mon=100;
	for(a=1;a*7<=mon;a++)
		for(b=1;a*7+b*5<=mon&&a+b<100;b++)
			for(c=1;a*7+b*5+c<=mon&&a+b+c*3<=100;c++)
				if(a*7+b*5+c==100&&a+b+c*3==100)
					printf("%d %d %d",a,b,c*3);
				
	//the only answer is 3 10 87
	return 0;
} 