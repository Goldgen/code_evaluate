#include <stdio.h>
#include <stdlib.h>
int Avg(){
  static float n,i=0,m=0;
  scanf("%d",n);
  if(n!=-1){
  i++;
  m=m+n;
  printf("%.2f",m/i);
  Avg();}
  }
int main()
{
    Avg();
    return 0;
}
