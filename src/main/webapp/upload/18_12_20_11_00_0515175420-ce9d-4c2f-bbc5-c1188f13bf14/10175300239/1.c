#include <stdio.h>
#include <string.h>
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

char** Input(int n){
    char **ptr;
    ptr=(char**)malloc(sizeof(char*)*n);
    int i;
    for(i=0;i<n;i++){
        *(ptr+i)=(char*)malloc(sizeof(char)*32);
        gets(*(ptr+i));
    }
    return ptr;
}
void Free(char**a, int n){
    int i;
    for(i=0;i<n;i++)
        free(a[i]);
    free(a);
}
void Sort(char **a, int n){
    char temp[32];
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
}
