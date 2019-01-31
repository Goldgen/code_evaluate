#include <stdio.h>
#include <stdlib.h>
int main()
{ float fahr;
  scanf("%f",&fahr);
   int ce;
   float c=(5*(fahr-32.0)/9.0);
 ce=(int)c;
   printf("celsius = %d",ce);
   return 0;

}
