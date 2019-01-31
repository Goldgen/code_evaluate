#include <stdio.h>

int main(void)
{
  unsigned int count = 5;
  double grade[5] = {0.0};                       

  double sum = 0;                       // Sum of the grades

  // Read the ten grades to be averaged
  for(unsigned int i = 0 ; i < count ; ++i)
  {

    scanf("%lf", & grade[i]);              // Read a grade
    sum += 1.0/grade[i];
  }
  for(unsigned int i = 0 ; i < count ; ++i)
  {
      printf("%.2lf",1.0/grade[i]);
      if(i!=count-1)printf(" ");
  }
  printf("\n");
           // Calculate the average

  printf("%.6lf", sum);
  return 0;
}