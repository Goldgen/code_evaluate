#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** Input(int n)
{
    char **p=calloc(n,sizeof(char*));
    int i;
    for(i=0;i<n;i++)
    {
        *(p+i)=(char*)malloc(sizeof(char)*60);
        gets(*(p+i));
    }
    return p;
}

void Free(char**a,int n)
{
    while(n--)
        free(*(a+n));
    free(a);
}

void Sort(char **a,int n)
{
    int i,j;
    char t[30]={0};
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(*(a+i),*(a+j))>0)
            {
                strcpy(t,*(a+i));
                strcpy(*(a+i),*(a+j));
                strcpy(*(a+j),t);
            }
}

int main()
{
    char **p;
    int n,i;
    scanf("%d",&n);
    getchar();
    p=Input(n);
    Sort(p,n);
    for(i=0;i<n;i++)
        printf("%s\n",p[i]);
    Free(p,n);
    return 0;
}
