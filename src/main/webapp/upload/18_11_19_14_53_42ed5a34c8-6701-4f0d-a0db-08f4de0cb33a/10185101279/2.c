#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int sum(int x);
int main()
{ int n;
scanf("%d",&n);
printf("%d",sum(n));

   return 0;
}
int sum(int x){
if(x/10==0)
    return x;

    return sum(x/10)+x%10;
}

















































































































































