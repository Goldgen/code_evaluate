#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n){
    char** arr= calloc(n,sizeof(char*));
    int i=0;
    for(i=0;i<n;i++){
        *(arr+i) = calloc(100,sizeof(char));
        gets(*(arr+i));
    }
    return arr;
}
void Free(char**a, int n){
    int i=0;
    for(i=0;i<n;i++){
        free(*(a+i));
    }
    free(a);
}
void Sort(char **a, int n){
    char* temp=NULL;
    int i=0,j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
          if(strcmp(*(a+i),*(a+j))<0){
                temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
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
    for(i=0; i<n; i++) printf("%s\n",p[i]);
    Free(p,n);
    return 0;
}


