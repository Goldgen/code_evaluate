#include <stdio.h>
#include<math.h>

int main()
{
    float A=0.0;
    float B=0.0;
    float C=0.0;
    float D=0.0;
    scanf("%f %f",&A,&B);

    D=(A-B)*(A-B);
    C=pow(D,0.25);
    printf("%.8f %.8f %.3f",A,B,C);
    return 0;
}
