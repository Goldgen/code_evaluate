#include<stdio.h>

int main()
{double amounts[5];
long dollars[5];
long cents[5];
float eps=0.00001;
for(int i=0;i<5;i++){
	scanf("%lf",&amounts[i]);
	dollars[i]=(int)amounts[i];
	cents[i]=(amounts[i]-dollars[i]+eps)*100;
	if((i!=4)&&(cents[i]!=0)){
		printf("$%ld.%ld ",dollars[i],cents[i]);
	}
	
	else if(i==4&&cents[i]!=0){
		printf("$%ld.%ld",dollars[i],cents[i]);
	}
	else if(cents[i]==0&&i!=4){
		printf("$%ld.00 ",dollars[i]);
	}
	else if(cents[i]==0&&i==4){
		printf("$%ld.00",dollars[i],cents[i]);
	}
	
}
} 