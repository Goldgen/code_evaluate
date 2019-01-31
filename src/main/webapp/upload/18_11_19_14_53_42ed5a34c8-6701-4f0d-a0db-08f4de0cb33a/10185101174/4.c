#include <stdio.h>
#include <stdlib.h>

void to_binary(unsigned int);

int main()
{
    unsigned long int n;
    scanf("%lu",&n);
      to_binary(n);
}
void to_binary(unsigned int n){
    int i;
    i=n%2;
    if(n>=2){
        to_binary(n/2);
    }
    putchar(i == 0 ? '0':'1');

}
