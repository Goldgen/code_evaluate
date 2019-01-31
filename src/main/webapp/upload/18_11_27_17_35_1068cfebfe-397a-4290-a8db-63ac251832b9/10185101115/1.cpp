#include<stdio.h>

int main()
{double a[5];
double b[5];
double c;
for(int i=0;i<5;i++){
	scanf("%lf",&a[i]);
	b[i]=1.0/a[i];
	if(i<4){
		printf("%.2lf ",b[i]);
	}
	else{
		printf("%.2lf",b[i]);
	}
	c+=b[i];
}
printf("\n%.6lf",c);
return 0;
}