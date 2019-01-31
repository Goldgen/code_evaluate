#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define SIZE 10

int main()
{
    int n;
    char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d",&n);
    printf("%s",*(month+n-1));
    return 0;
}