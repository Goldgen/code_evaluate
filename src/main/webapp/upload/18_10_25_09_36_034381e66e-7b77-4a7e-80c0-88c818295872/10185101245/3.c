#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned long long N=1;
 int i=1;
	int n;
 scanf("%d",&n);

 while(i<=n){
   N *=i;
	 i++;
 }

	printf("%llu",N);

        return 0;
}
