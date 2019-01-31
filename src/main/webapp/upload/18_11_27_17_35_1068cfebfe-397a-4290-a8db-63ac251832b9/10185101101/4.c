#include <stdio.h>

int main(void)
{
  const size_t nrows = 11;
  const size_t ncols = 5;
  double data[nrows][ncols];
  double value = 2.0;

  for(size_t row = 0 ; row < nrows ; ++row)
	{
    data[row][0] = value;
    data[row][1] = 1.0/data[row][0];
    data[row][2] = data[row][0]*data[row][0];
    data[row][3] = data[row][2]*data[row][0];
    data[row][4] = data[row][3]*data[row][0];
		value += 0.1;
  }


  printf("x ");
  printf("1/x ");
  printf("x^2 ");
  printf("x^3 ");
  printf("x^4");

    for(size_t row = 0 ; row < nrows ; ++row)
  {
    printf("\n");
    for(size_t col = 0 ; col < ncols ; ++col){
      if(col==0)      printf("%.4lf", data[row][col]);
        else
      printf(" %.4lf", data[row][col]);}
  }

	return 0;
}
