#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char *mptr[]={"January","February","March","April","May","June","July","August","September",
    "October","November","December"};
    printf("%s",mptr[n-1]);
    return 0;
}
