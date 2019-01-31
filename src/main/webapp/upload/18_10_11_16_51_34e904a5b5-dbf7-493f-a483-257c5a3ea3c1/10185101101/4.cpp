#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float number1 = 0.0F;
    float number2 = 0.0F;
    float answer=0.0F;
    scanf("%f",&number1);
    scanf("%f",&number2);
    if(number1-number2>=0)
        answer = sqrt(number1-number2);
    else
        answer = sqrt(number2-number1);
    printf("%.8f %.8f %.3f",number1,number2,answer);
    return 0;
}