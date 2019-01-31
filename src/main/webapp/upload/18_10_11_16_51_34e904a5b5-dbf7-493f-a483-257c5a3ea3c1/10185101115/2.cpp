#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{   char c1,c2;
    int c3,c4;
    c3=INT_MAX;
    c4=INT_MIN;
    c1=CHAR_MAX;
    c2=CHAR_MIN;
    printf("%d\n%d\n%d\n%d",c1,c2,c3,c4);
    return 0;
}
