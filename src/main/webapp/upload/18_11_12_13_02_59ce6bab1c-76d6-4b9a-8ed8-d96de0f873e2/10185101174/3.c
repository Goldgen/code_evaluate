#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define PRIME "It is a prime number."
#define NOT_PRIME "It's not a prime number."
int division(int,int);
int main()
{
   int a;
   scanf("%d",&a);
   if(a==2){
    printf("%s",PRIME);
   }
   else if(a%2==0){
    printf("%s",NOT_PRIME);
   }
   else if(a>=3){
        int q=0;
        for(int n=3;n<=sqrt(a);n=n+2){
                if(division(a,n)==0){
                q=1;
                break;
                }

        }
        if(q==0)
            printf("%s",PRIME);
        else
            printf("%s",NOT_PRIME);
   }

}
int division(int a,int n){
    int result;
    result=a%n;
    return result;
}