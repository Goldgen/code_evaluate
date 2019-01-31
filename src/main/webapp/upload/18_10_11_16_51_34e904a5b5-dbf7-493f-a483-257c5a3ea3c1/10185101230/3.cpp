#include<stdio.h>
#include<limits.h>
#include<math.h>
int main()
{

int myIntA;
int aTen;
int aOne;

scanf("%d",&myIntA);

aOne = myIntA%10;
aTen = (myIntA - aOne)/10;

printf("%d %d",aOne,aTen);


return 0;
}


