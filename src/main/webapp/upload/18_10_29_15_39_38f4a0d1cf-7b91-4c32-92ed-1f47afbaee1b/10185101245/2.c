#include <stdio.h>
#include <stdlib.h>

int main()
{
  float E=1.0;
  float m=1.0;
  int i;
  for(i=1;i<=50;i++){
   m/=i;
    E+=m;
  }
    printf("%.6f",E);
    return 0;
}
