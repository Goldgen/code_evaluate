#include<stdio.h>
#include<stdlib.h>
int solve(int n)
{ if(n<10)return n;
  return n%10+solve((n-n%10)/10);

}
int main()
{ int n;
scanf("%d",&n);
 printf("%d",solve(n));
 return 0;

}