#include<stdlib.h>
float average(float n)
{
	static float i;
	static float sum=0;
	if(n!=-1){
		for(i=1;n!=-1;i++){
			sum=sum+n;
			printf("%.2f\n",sum/i);
			scanf("%f\n",&n);
		}
	}
	if(n==-1)
		printf("");
	return;
}
int main()
{
	float m;
	scanf("%f",&m);
	average(m);
	return 0;
}
