#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char ** Input(int n);
void Sort(char **a, int n);
void Free(char**a, int n);
int main()
{

    char** p;
    int n;
    scanf("%d",&n);
    getchar();
    p=Input(n);
    Sort(p,n);
    for(int i=0;i<n;i++)
        puts(p[i]);
Free(p,n);
    return 0;
}
char** Input(int n){
    char **str;
    str=(char **)malloc(sizeof(char *)*(n+1));
    for(int i=0;i<n;i++){
        str[i]=(char *)malloc(sizeof(char)*50);
        gets(str[i]);
    }
    return str;
}
void Sort(char **a, int n){
    for(int i=0;i<n-1;i++){
        char *temp;
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
}
void Free(char**a, int n){
for(int i=0;i<n;i++){
    free(*(a+i));
}
free(a);
}
