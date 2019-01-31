#include <stdio.h>
#include <math.h>

int swi(int n)
{
    int x=0, i=0;
    while(n!=0)
    {
        x+=(n%10)*(int)pow(8,i);
        i++;
        n/=10;
    }
	return x;
}

int main()
{
    int n;
    scanf("%d", &n); 
    printf("%d", swi(n));
}
 