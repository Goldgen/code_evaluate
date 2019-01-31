#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ret=1;
    for(int i=2;i<sqrt(n)+1;i++){
        if(!(n%i))
        {
           ret=0;break;
        }

    }

    if(ret==1&&n!=1||n==2)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return 0;
}




