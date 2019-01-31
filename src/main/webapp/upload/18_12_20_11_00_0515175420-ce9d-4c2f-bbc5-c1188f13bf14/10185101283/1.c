#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char** Input(int n)
{
    char** ptstr= calloc(n,sizeof(char*));
    for(int i=0;i<n;++i)
    {
       *(ptstr+i) = calloc(30,sizeof(char));
       gets(*(ptstr+i));
    }
    return ptstr;
}
void Free(char**a, int n)
{
    for(int i=0;i<n;++i)
        free(*(a+i));
    free(a);
    return ;
}
void Sort(char **a, int n)
{
     char *temp;
    for(int i=0;i<n-1;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(strcmp(a[i],a[j])>0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{   char** p;
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