#include <stdio.h>
#include <string.h>
#include <math.h>
int hex2int(char s[]){
int n = strtol(s,NULL,16);
printf("%d",n);
}
int main()
{
    char a[9];
    scanf("%s",a);
    hex2int(a);
}
