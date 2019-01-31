#include <stdio.h>

int main()
{
    double input[5]={0.0};
    double output[5]={0.0};
    double sum=0.0;
    for (int i= 0; i < 5; i++) {
    scanf("%lf", &input[i]); 
	}
    for (int i = 0; i < 5; i++) {
        output[i]=1.0 / input[i]; 
	}
    for (int i = 0; i < 5; i++) {
		if(i==0)
            printf("%.2lf",output[i]);
		else
			printf(" %.2lf",output[i]);
    sum += output[i]; 
	}
    printf("\n%.6lf", sum);
    return 0;
}