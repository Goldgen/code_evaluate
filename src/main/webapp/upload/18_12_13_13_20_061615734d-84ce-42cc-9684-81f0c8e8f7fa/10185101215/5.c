#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  char a[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"},*p;
  p=a[0];
  scanf("%d",&n);
  printf("%s",a[n-1]);
}