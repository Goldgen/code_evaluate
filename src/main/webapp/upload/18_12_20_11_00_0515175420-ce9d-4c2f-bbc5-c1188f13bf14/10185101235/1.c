#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char** Input(int n);
void Free(char**a, int n);
void Sort(char **a, int n);

int main()
{
    char** p;
    int n,i;
    scanf("%d",&n);
    getchar();
    p = Input(n);
    Sort(p,n);
    for(i=0; i<n; i++)
        printf("%s\n",p[i]);
    Free(p,n);
    return 0;
}

char** Input(int n)
{
    char** result = (char**)malloc(sizeof(char*)*n);
    int i = 0;
    for(i=0; i<n; i++)
    {
        result[i] = (char*)malloc(31 * sizeof(char));
        gets(result[i]);
    }
    return result;
}

void Free(char**a, int n)
{
    int i = 0;
    for(i=0;i<n;i++)
    {
        free(a[i]);
        a[i] = NULL;
    }
    free(a);
    a = NULL;
}

void Sort(char**a,int n)
{
    char* mim;
    int i = 0;
    int j = 0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                mim = a[i];
                a[i] = a[j];
                a[j] = mim;
            }
        }
    }
}
