#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A=0,B=0;
    for(i=0;i<=100;i++)
    {
        if(i%2!=0) A=A+i;
        else B=B+i;
    }
    printf("%d %d",A,B);
    return 0;
}