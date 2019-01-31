#include <stdio.h>
    float amounts[5];
    long dollars[5];
    long cents[5];
    

int main(){
    	scanf("%f",&amounts[0]);
    	dollars[0]=amounts[0]/1;
        cents[0]=(long)((amounts[0]-dollars[0]+0.001)*100);
        if (cents[0]==0)
            printf("$%ld.00",dollars[0]);
        else
        printf("$%ld.%lld",dollars[0],cents[0]);
    
	for(int i=1;i<5;i++){
    	scanf("%f",&amounts[i]);
    	dollars[i]=(long)amounts[i];
        cents[i]=(long)((amounts[i]-dollars[i]+0.001)*100);
        if (cents[i]==0)
        printf(" $%ld.00",dollars[i]);
        else
        printf(" $%ld.%ld",dollars[i],cents[i]);
	}
    return 0;
}