#include <stdio.h>
int main()
{
    unsigned int n,i=0;
    scanf("%d",&n);
    while (n>0){
        if(n%2==1)
        i++;
        n=n/2;
    }
    printf("%u",i);
    return 0;
}
