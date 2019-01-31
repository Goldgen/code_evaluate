#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char** Input(int n)
{
    char **p;
    p=(char**)malloc(sizeof(char*)*n);
    for (int i=0; i<n; i++)
    {
        *(p+i)=(char*)malloc(sizeof(char)*35);
        fgets(*(p+i),33,stdin);
    }
    return p;
}
void Free(char **a, int n)
{
    for (int i=0; i<n; i++)
    {
        free(*(a+i));
        *(a+i)=NULL;
    }
    free(a);
    a=NULL;
}
void Sort(char **a, int n)
{
    for (int i=0; i<n; i++)
        for (int v=0; v<n-1-i; v++)
        {
            if(strcmp(*(a+v),*(a+v+1))>0)
            {
                int *p;
                p=*(a+v);
                *(a+v)=*(a+v+1);
                *(a+v+1)=p;
            }
        }
}
int main()
{
    char **p;
    int n,i;
    scanf("%d",&n);
    getchar();
    p=Input(n);char** Input(int n)
{
    char **p;
    p=(char**)malloc(sizeof(char*)*n);
    for (int i=0; i<n; i++)
    {
        *(p+i)=(char*)malloc(sizeof(char)*35);
        scanf("%s",*(p+i));
    }
    return p;
}
    Sort(p,n);
    for (i=0; i<n; i++)
        printf("%s",*(p+i));
    Free(p,n);
    return 0;
}
