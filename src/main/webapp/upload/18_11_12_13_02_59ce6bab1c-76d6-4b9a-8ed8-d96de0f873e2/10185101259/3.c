#include <stdio.h>
#include <stdlib.h>
 void isprime(int num){
 int i;
 for(i=2;i<num;i++)
    {
    if(i==num-1)
    printf("It is a prime number.");
    if(num%i==0)
        break;}
    if(num==2||num==1)
    printf("It is a prime number.");
    if(i<num)
    printf("It's not a prime number.");
}
int main()
{int num;
    scanf("%d",&num);
   isprime(num
   );
    return 0;}
