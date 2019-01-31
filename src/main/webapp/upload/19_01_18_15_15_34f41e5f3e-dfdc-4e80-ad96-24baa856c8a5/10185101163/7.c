#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=0;
    scanf("%d",&a);
    while(a!=0){
        if(a%2!=0) i++;
        a=a/2;
    }
    printf("%d",i);
    return 0;
}
