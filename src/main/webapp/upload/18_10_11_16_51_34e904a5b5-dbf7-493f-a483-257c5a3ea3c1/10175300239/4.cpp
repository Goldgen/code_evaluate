#include <stdio.h>
#include <math.h>

int main()
{
    float A=0.0f;
    float B=0.0f;
    float result=0.0;
    scanf("%f %f",&A,&B);
	if(A>B){
    	result=sqrt(A-B);
	}
	if(A<B){
		result=sqrt(B-A);
	}
    printf("%.8f %.8f %.3f",A,B,result);
    return 0;
}