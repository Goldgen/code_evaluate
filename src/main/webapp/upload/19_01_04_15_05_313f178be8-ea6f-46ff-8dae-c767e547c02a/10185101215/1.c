#include<stdio.h>
#include<math.h>
int main()
{
 float x;
 int y;
 scanf("%f",&x);
 y=(int)(5*(x-32)/9);
 printf("celsius = %d",y);
 return 0;
}