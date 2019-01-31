#include<stdio.h>
int main(){
	int sume=0,sumo=0,i=0;
	while(++i<=100)
		if(i%2) sumo+=i;
		else sume+=i;
	printf("%d %d",sumo,sume);
	return 0;
} 