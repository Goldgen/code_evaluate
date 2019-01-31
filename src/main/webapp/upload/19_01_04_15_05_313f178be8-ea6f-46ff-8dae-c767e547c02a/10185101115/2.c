#include <stdio.h>


int main()
{
    int a,b,c;
    char p,l; 
    scanf("%d%c%d%c%d",&a,&p,&b,&l,&c);
    int n=0,d=1;
    for(n=0;n<10;n++){
    	if((n==0)&&(a+b==c)){
    		printf("%d",n);
		}
    	d=d*10;
	    if((c-b)/d==a){
    		printf("%d",n+1);
		} 
		else if((c-a)/d==b){
			printf("-%d",n+1);
		}
	} 
	return 0; 
 } 