#include<stdio.h>
#include<math.h>

int main()
{
float A,B,x;
scanf("%f%f",&A,&B);
if (A-B>=0)
x=sqrt(A-B);
else x=sqrt(B-A);
printf("%.8f %.8f %.3f",A,B,x) ;
return 0;
}