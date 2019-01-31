#include <stdio.h>
#include <math.h>

/*
int main(void){
    printf("%d\n%d\n",(char)0x7F,(char)0x80);
    printf("%d\n%d",(int)pow(2,31) - 1,(int)pow(2,31));
    return 0;
}
*/


int main(void)
{
    float A,B;
    scanf("%f %f",&A,&B);
    float C;
    C = A > B?(A-B):B-A;
    printf("%.8f %.8f %.3f",A,B,sqrt(C));
}
