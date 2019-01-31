#include <stdio.h>
#include <math.h>
int main(){
    int a,b,no;
    char ch;
	while(scanf("%d %c %d %c %d",&a,&ch,&b,&ch,&no)!=EOF){
		int yes=0,ifput=0;
		for(int i=0;i<10;i++){
			yes=a*pow(10,i)+b;
			if(yes==no){
				printf("%d\n",i);
				ifput=1;
				break;
			}
		}
		for(int i=1;ifput==0;i++){
			yes=a+b*pow(10,i);
			if(yes==no){
				printf("-%d\n",i);
				ifput=1;
				break;
			}
		}
	} 
	return 0;
} 