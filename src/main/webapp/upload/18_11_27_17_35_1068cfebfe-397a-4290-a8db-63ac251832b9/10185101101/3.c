
#include <stdio.h>

int main()
{
  const size_t size = 5;
  double amounts[size];
  long dollars[size];
  long cents[size];


  for(size_t i = 0 ; i < size ; ++i)
    scanf("%lf", &amounts[i]);

  for(size_t i = 0 ; i < size ; ++i)
  {
    dollars[i] = (long)amounts[i];
    cents[i] = (long)(100.0*(amounts[i] - dollars[i]));
  }


  for(size_t i = 0 ; i < size ; ++i){
    printf("$%d.%02d", dollars[i], cents[i]);
    if(i!=size-1)printf(" ");}


  return 0;
}