#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[40],brr[40];
    scanf("%s %s",arr,brr);
    if(strlen(arr)!=strlen(brr))
        printf("\"%s\" is NOT a rotation of \"%s\"",arr,brr);
    else
        printf("\"%s\" is a rotation of \"%s\"",arr,brr);
    return 0;
}
