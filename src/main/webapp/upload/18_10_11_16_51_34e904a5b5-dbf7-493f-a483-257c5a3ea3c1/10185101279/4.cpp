#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
   float A;
   float B;
   float C;
   scanf("%f %f",&A,&B);
   C=abs(A-B);
   C=sqrt(C);
   printf("%.8f %.8f %.3f",A,B,C);


    return 0;
}
