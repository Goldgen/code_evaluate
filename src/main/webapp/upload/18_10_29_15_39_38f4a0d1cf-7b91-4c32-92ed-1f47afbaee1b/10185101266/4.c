#include<stdio.h>
#include<stdlib.h>
int main()
{
  float min,max;
  float score[100];
  int n=-1;
  int m;
  do
  { n++;
    scanf("%f",&score[n]);
  }
  while(score[n]>=0);
  max=score[0];
  for(m=0;m<n;m++)
  {
    if(score[m]>max)
    {max=score[m];}
  }
	min=score[0];
	for(m=0;m<n;m++)
  {
    if(score[m]<min)
    {min=score[m];}
  }
  printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
}

