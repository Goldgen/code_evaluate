#include <stdio.h>
#include <stdlib.h>
int To2(int n){
  int r;
  r=n%2;
  if(n>=2) To2(n/2);
  printf("%d",r);
  }
int main()
{
    int a;
    scanf("%d",&a);
    To2(a);
    return 0;
}
