#include <stdio.h>

int main(void)
{
    int n= 1 ;
    long answer = 1;
    while(n<=10){
        answer*=n;
        n++;
    }
    printf("%d\n",answer);

   while(n<=20){
    answer*=n;
    n++;
   }
   printf("%lld",answer);
    return 0;
}
