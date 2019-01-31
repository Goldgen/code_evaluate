#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{

float myFloatA;
float myFloatB;
float resultIs;
int zhongJian;

scanf("%f %f",&myFloatA,&myFloatB);

zhongJian=fabs(myFloatA-myFloatB);
resultIs =sqrt(zhongJian) ;

printf("%.8f %.8f %.3f",myFloatA,myFloatB,resultIs);


return 0;

}

