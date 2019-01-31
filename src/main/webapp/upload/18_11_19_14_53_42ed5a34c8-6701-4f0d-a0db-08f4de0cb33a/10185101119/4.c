#include <stdio.h>
void printn(int n){
   int a=n/2;
   if(a > 0)
   printn(a);
   printf("%d", n % 2);
}
int main(){
   int n;
   scanf("%d",&n);
   printn(n);
   printf("\n");
   return 0;
}