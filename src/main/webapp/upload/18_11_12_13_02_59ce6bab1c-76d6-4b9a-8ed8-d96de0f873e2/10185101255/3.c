#include<stdio.h>
#include<math.h>
int is_prime(int n);

int main()
{
	int a=0;
	scanf("%d",&a);
  if(is_prime(a))
	  printf("It is a prime number.");
	else 
		printf("It's not a prime number.");

}








int is_prime(int n)
{
	int i;
	
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}