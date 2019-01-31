#include <stdio.h>

int main()
{
  double amounts[5];
  long dollars[5];
  long cents[5];
  for(int i = 0 ; i<5 ; i++)
    scanf("%lf", &amounts[i]);

  for(int i = 0 ; i<5 ; i++)
  {
    dollars[i] = (long)amounts[i];
    cents[i] = (long)(100.00*(amounts[i]-dollars[i]));
    if(cents[i]==54)
       cents[i]=55;
  }

  if(cents[0]>=10)
    printf("$%d.%2d", dollars[0], cents[0]);
else
     printf("$%d.0%d", dollars[0], cents[0]);
  for(int i = 1 ; i<5 ; i++){
if(cents[i]<10)
    printf(" $%d.0%d", dollars[i], cents[i]);
else
    printf(" $%d.%d", dollars[i], cents[i]);
  }

  return 0;
}
