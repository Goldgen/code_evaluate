#include <stdio.h>
#include <stdlib.h>

int main()
{  int num;
  scanf("%d",&num);
 int myint1,myint2;
   myint1=num%10;
   myint2=(num-num%10)/10;
   printf("%d %d",myint1,myint2);
 return 0;
}
