#include <stdio.h>
#include <stdlib.h>


int main()
{
    unsigned int num;
    scanf("%u",&num);
    int n=0;
    while(num){
        if(num%2==1)
            n+=1;
        num/=2;
    }
    printf("%d",n);
    return 0;
}
