#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odd=0;int even=0;
    for(int i=1;i<=100;i+=2){
        odd+=i;
    }
    for(int i=2;i<=100;i+=2){
        even+=i;
    }
    printf("%d %d",odd,even);
    return 0;
}
