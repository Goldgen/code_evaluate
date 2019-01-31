#include <stdio.h>
#include <string.h>
#include <malloc.h>

#define N 100
#define MAX 100
void sort(char** str,int n)
{   int i,j;
    for( i = 0;i < n - 1;i++)
    {
        for(j = 0;j < n - 1- i;j++)
        {
            if(strcmp(str[j], str[j + 1]) > 0)
            {
                char *temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int  main()
{
    char *a[N];
    int n;
    int i;
    scanf("%d", &n);
    getchar();
 for(i=0; i<n; i++)
    {
        a[i] = (char *)malloc(MAX * sizeof(char));
        gets(a[i]);
    }

    sort(a,n);

    for(i = 0;i < n;i++)
    {
        puts(a[i]);
    }
    return 0;
}