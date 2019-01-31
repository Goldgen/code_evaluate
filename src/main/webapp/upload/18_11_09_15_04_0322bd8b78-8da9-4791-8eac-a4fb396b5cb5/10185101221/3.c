#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char arr[100];
    scanf("%s",arr);
    int i =0;
    for(;i<strlen(arr);i++)
    {
        if( (tolower(arr[i])=='a')||(tolower(arr[i])=='e')||(tolower(arr[i])=='i')||(tolower(arr[i])=='o')||(tolower(arr[i])=='u'))
        {
            printf("yes");
            return 0;
        }
    }
    printf("no");
    return 0;
}
