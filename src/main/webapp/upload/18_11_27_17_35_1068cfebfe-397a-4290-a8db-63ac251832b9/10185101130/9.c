#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char arr1[1000];
    char arr2[1000];
    int arr[1000];
    int  a[1000];
    int  b[1000];
    int i,j = 0;
    scanf("%s",arr1);
    int len1 = strlen(arr1);
    scanf("%s",arr2);
    int len2 = strlen(arr2);
    int len_long = (len1 >= len2)?len1:len2;
    
    for (int i = 0; i <= len_long; ++i)
    {
        if (i < len1)
            a[i] = arr1[len1 - i - 1] - '0';
        else
            a[i] = 0;
    }
    for (int i = 0; i <= len_long; ++i)
    {
        if (i < len2)
            b[i] = arr2[len2 - i - 1] - '0';
        else
            b[i] = 0;
    }
    for(i = 0;i < len_long;i++)
    {
        arr[i] = (a[i]+b[i]+j) % 10;
        j = (a[i]+b[i]+j) / 10;
    }
    if (j > 0)
        printf("%d", j);
    for(i = len_long - 1;i >= 0;i--)
        printf("%d", arr[i]);
    return 0;
}
