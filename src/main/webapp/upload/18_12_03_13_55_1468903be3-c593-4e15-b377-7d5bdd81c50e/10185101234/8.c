#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[80];
    int n,i;
    gets(arr);
    n=strlen(arr);
    for (i=0; i<n/2; ++i)
    {
        if(arr[i]!=arr[n-1-i])
        {
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}
