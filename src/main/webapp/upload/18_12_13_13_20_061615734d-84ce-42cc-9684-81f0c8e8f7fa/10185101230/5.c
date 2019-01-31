#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    scanf("%d",&num);
    Number2Alpha(num);
}
void Number2Alpha(int a)
{
    char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("%s",month[a-1]);
}
