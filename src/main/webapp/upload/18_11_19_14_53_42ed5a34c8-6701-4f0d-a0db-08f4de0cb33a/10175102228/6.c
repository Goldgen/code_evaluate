#include<stdio.h>
#include<stdlib.h>
 int feb(int n)
{   if(n==0)return 0;
	 if(n==1||n==2)return 1;
   return feb(n-1)+feb(n-2);
}
int main()
{  int n;
scanf("%d",&n);
printf("%d",feb(n));
 return 0;
}
