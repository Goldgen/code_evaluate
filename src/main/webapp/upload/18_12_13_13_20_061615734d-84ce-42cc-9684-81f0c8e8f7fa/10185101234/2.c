#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char a[80];
    int n;
    gets(a);
    scanf("%d",&n);
    puts(a+n); 
}