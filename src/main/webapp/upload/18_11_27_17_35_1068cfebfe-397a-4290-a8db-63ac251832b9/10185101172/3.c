#include <stdio.h>

int main()
{
  float amounts[5];
  int i=0;
  for(i=0;i<5;i++)
    {
    scanf("%f",&amounts[i]);
    printf("$%.2f",amounts[i]);
    if(i!=4)
        printf(" ");
    }
  return 0;
}
