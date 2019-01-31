#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n)
{
        char **p1=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;++i){
        p1[i]=(char*)malloc(100);
        gets(p1[i]);
        p1[i][strlen(p1[i])]='\0';
        }
    return p1;
}

void Free(char**a, int n)
{
    for(int i=0;i<n;++i)
        free(a[i]);
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