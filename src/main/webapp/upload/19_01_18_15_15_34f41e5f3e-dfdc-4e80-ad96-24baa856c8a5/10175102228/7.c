#include<stdio.h>
#include<stdlib.h>
int main()
{ int n;
scanf("%d",&n);
int cnt=0;
while(n!=0)
{ if(n%2!=0)cnt++;//有一个1
  n=n/2;
  }
  printf("%d",cnt);
return 0;
}
