#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char str[n][200];
    for(i=0;i<n;i++)
    {
        gets(str[i]);
    }

}