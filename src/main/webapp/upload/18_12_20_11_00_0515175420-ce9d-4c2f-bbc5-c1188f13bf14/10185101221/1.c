#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n)
{
    char **pn=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        pn[i]=malloc(100);
        gets(pn[i]);
        int num=strlen(pn[i]);
        pn[i][num]='\0';
    }
    return pn;
}
void Free(char**a, int n)
{
    for(int i=0;i<n;i++)
        free(a[i]);
    return ;
}
void Sort(char **a, int n)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(a[j],a[j+1])>0){
                char *t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    return ;
}
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
