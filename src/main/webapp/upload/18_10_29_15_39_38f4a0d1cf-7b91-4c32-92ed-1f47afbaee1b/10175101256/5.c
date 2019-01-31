#include <stdio.h>
#include <stdlib.h>

int main()
{
    int odd=0,even=0;
    for(int i=1;i<=100;i+=2){
        odd+=i;
    }
    for(int j=0;j<=100;j+=2){
        even+=j;
    }
    printf("%d %d",odd,even);
    return 0;
}
