#include <stdio.h>
#include <stdlib.h>
int main()
{
  double data[11][5]={0.0};
  int i,j;
  for(i=0;i<=11;i++)
  {
      data[i][0]=2.0+0.1*i;
  }
  data[10][0]=3.0000;
  for(i=0;i<11;i++)
  {
       data[i][1]=1.0/data[i][0];
       data[i][2]=data[i][0]*data[i][0];
       data[i][3]=data[i][0]*data[i][0]*data[i][0];
       data[i][4]=data[i][0]*data[i][0]*data[i][0]*data[i][0];
  }
  for(i=0;i<10;i++)
  {
      for(j=0;j<4;j++)
      {
          printf("%.4lf ",data[i][j]);
      }
	  printf("%.4lf",data[i][4]);
      printf("\n");
  }
  for(j=0;j<4;j++)
	{
		printf("%.4lf ",data[10][j]);
	}
	  printf("%.4lf",data[10][4]);

  return 0;
}