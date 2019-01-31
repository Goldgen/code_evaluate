#include<stdio.h>
#include<math.h>
int main()
{
	char x,y;
	int answer1=0,answer2=0,a,b,c,st=0;
	scanf("%d%c%d%c%d",&a,&x,&b,&y,&c);
	st=a+b; 
	if(a!=0){
		for(answer1=0;1;answer1++){
			st=a*pow(10,answer1)+b;
			if(st>=c){
				break;
			}
		}
	}
	if(st==c){
		printf("%d",answer1);
	}
	else{
		for(answer2=0;1;answer2++){
			st=b*pow(10,answer2)+a;
			if(st>=c){
				printf("-%d",answer2);
				break;
			}
		}
	}
}