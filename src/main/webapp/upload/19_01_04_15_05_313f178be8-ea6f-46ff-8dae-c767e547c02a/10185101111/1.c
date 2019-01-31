#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main()
{
   float f;
   scanf("%f",&f);
   int c=5*(f-32)/9;
   printf("celsius = %d",c);
}