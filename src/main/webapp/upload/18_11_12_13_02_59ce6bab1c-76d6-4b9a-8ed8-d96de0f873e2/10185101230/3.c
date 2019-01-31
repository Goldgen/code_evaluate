#include <stdio.h>
#include <stdlib.h>
void prime(int x){
int n,i;
n=x;
for(i=2;i<=n-1;i++)
{if(n%i==0)  break;}
if(i<n||n==1) printf("It's not a prime number.");
else printf("It is a prime number.");

}
int main()
{
    int x;
    scanf("%d",&x);
    prime(x);
    return 0;
}
