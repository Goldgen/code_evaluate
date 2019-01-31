#include <stdio.h>
int main(){
    double amount[5]={0.0f};
    long dollar[5]={0L},cent[5]={0L};
    for(int i=0;i<=4;i++){
    	scanf("%lf",&amount[i]);
    	dollar[i]=amount[i];
    	cent[i]=(amount[i]-dollar[i])*100+1e-6;
    	if(i<4&&cent[i]>=10)
    	printf("$%ld.%ld ",dollar[i],cent[i]);
    	else if(i==4&&cent[i]<10)
    	printf("$%ld.0%ld",dollar[i],cent[i]);
        else if(i<4&&cent[i]<10)
    	printf("$%ld.0%ld ",dollar[i],cent[i]);
    	else if(i==4&&cent[i]>=10)
    	printf("$%ld.%ld",dollar[i],cent[i]);
	}
	return 0;
}