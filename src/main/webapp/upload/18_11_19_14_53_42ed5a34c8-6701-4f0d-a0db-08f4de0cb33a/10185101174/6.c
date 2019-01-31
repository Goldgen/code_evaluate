#include <stdio.h>
#include <stdlib.h>

unsigned int fibonacci(unsigned int);
int main()
{
    unsigned int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));
}
unsigned int fibonacci(unsigned int n){
    if((n==1)||(n==2))
        return 1;
    else if(n==0)
        return 0;
    
        return fibonacci(n-1)+fibonacci(n-2);

}
