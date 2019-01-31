#include <stdio.h>
#include <stdlib.h>

int main()
{
  float n;
  float i=1;
  float j=0;
  scanf("%f",&n);
  if(n!=-1){
   for(i=1;n!=-1;i++)
  {
      j=j+n;
    printf("%.2f\n",j/i);
    scanf("%f",&n);
  }

  }
  if(n==-1)
  printf("");
  return 0;
}