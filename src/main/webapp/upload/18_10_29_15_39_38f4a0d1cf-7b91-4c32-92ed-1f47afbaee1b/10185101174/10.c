#include<stdio.h>
#include<math.h>
int main(){
	int x;
	scanf("%d",&x);
	printf("{}\n");
	for(int i=1;i<pow(2,x);++i){
		printf("{");
		int m=0;
		int k=i;
		while(k){
			if((k%2)&&(k!=1))
            printf ("%d,",m);
            else if((k%2)&&(k==1))
            printf("%d",m);
			k/=2;
			++m;
		}
		printf("}");
		if(i!=pow(2,x)-1)
		printf("\n");
	}
}
