#include <stdio.h>

int main(){
	unsigned long long a,b,c;
	scanf("%llu+%llu=%llu",&a,&b,&c);
	if(a+b==c)
	    printf("0");
	else {
		unsigned long long ca=a;
		unsigned long long cb=b;
		int cnt=1;
		int ret=0;
		for(;cnt<=9;cnt++){
			ca*=10;
			if(ca+b==c){
				printf("%d",cnt);
				ret=1;
				break;
			}
		}
		if(ret==0){
			for(cnt=-1;cnt>=-9;cnt--){
				cb*=10;
				if(a+cb==c){
					printf("%d",cnt);
					break;
				}
			}
		}
		
	} 
	
	
	
		
	return 0;
}