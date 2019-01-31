#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n);
void Free(char** a,int n);
void Sort(char** a,int n);
int main()
{
    char** p;
    int n,i;
    scanf("%d",&n);
    getchar();
    p = Input(n);
    Sort(p,n);
    for(i = 0;i < n;i++)
        printf("%s\n",p[i]);
    Free(p,n);
    return 0;
}

char** Input(int n)
{
    char** arr = calloc(n, sizeof(char *));
    int i;
    for(i = 0;i < n;i++)
    {
        *(arr + i) = calloc(35, sizeof(char));
        gets(*(arr + i));
    }
    return arr;
}

void Free(char** a,int n)
{
    for (int i = 0; i < n; ++i)
        free(*(a + i));
    free(a);
}

void Sort(char** a,int n)
{
    int i,j;
    char *temp;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n - i;j++)
        {
            if(strcmp(*(a+i),*(a+j)) > 0)
                {
                    *temp = *(a + j);
                    *(a+j) = *(a+i);
                    *(a+i) = *temp;
                }
        }
    }
}
