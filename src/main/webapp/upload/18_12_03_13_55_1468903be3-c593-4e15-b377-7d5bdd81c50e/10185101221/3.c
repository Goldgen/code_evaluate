#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr1[81];
    char arr2[81];
    scanf("%s%s",arr1,arr2);
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    int n=len1<len2? len1:len2;
    for(int i=0;i<n;i++)
        printf("%c%c",arr1[i],arr2[i]);
    if (len1<len2)
        for(int i=n;i<len2;i++)
            printf("%c",arr2[i]);
    else
        for(int i=n;i<len1;i++)
            printf("%c",arr1[i]);
    return 0;
}
