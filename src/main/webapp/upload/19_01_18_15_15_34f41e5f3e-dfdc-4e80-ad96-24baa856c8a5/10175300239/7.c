#include <stdio.h>

int main()
{
    int n;
    int count=0;
    scanf("%d",&n);
    while(n!=0){
        if(n%2!=0)
            count++;
        n/=2;
    }
    printf("%d",count);
    return 0;
}