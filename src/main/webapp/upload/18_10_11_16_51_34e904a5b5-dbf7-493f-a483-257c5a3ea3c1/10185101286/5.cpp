#include<stdio.h>
int main()
{
  int result1,result2,a,b;
	for(a=1;a<=10;a++){
		result1*=a;
	}
	for(b=1;b<=20;b++){
		result2*=b;
	}
	printf("%d\n%d",a,b);
	return 0;
}