#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n,max,min;
  max=0;min=100;
  while (scanf("%f",&n),n>=0)
  {if (max<n) max=n;
  if (min>n) min=n;}
  printf("最高成绩是: %0.2f, 最低成绩是: %0.2f",max,min);
    return 0;
}
