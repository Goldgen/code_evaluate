#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int n,i=2;
	scanf ("%u",&n);
	for (;i<=sqrt(n);i++){
		if(n%i==0){
			printf ("It's not a prime number.");break;
		}
	}
	if (i>sqrt(n)){
	    printf ("It is a prime number.");
    }
}