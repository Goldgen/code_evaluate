#include <stdio.h>
int main(){
	int odd=0,even=0;
	for(int i=1;i<=100;i++){
		if(i%2) odd+=i;
		else
			even+=i;
	}
	printf("%d %d",odd,even);
	return 0;
}
