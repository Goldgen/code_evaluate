#include<stdio.h>
#include<malloc.h>
#include<string.h>
char** Input(int n);
void Free(char **a, int n);
void Sort(char **a, int n);
int main()
{
    int n,i;
    char** arr=NULL;
    scanf("%d",&n);
    getchar();
    arr=Input(n);
    Sort(arr,n);
    for(i=0;i<n;++i)
    {
        printf("%s\n",arr[i]);
    }
    Free(arr,n);
    return 0;
}
char** Input(int n)
{
    int i;
    char **sen=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;++i)
    {
        sen[i]=malloc(100);
        gets(sen[i]);
        int num=strlen(sen[i]);
        sen[i][num]='\0';
    }
    return sen;
}
void Free(char**a, int n)
{
    int i;
    for(i=0;i<n;++i)
    {
        free(a[i]);
    }
    free(a);
}
void Sort(char **a, int n)
{
    char* sen1=NULL;
    int i,j;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1-i;++j)
        {
            if(strcmp(a[j],a[j+1])>0)
            {
                sen1=a[j];
                a[j]=a[j+1];
                a[j+1]=sen1;
            }
        }
    }
}
