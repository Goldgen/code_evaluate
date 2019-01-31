#include <stdio.h>
#include <math.h>


int main()
{
    float A=0.0f,
    B=0.0f,
    C=0.0f,
    D=0.0f;
   scanf("%f %f",&A,&B);
   C=A-B;
   D=pow(C,0.5);
   printf("%.8f",D);
   return 0;


}
