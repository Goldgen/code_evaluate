#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char** Input(int n){
    char **s=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
        s[i]=malloc(40*sizeof(char));
        gets(s[i]);
    }
    return s;
}

void Free(char**a, int n){
    for(int i=0;i<n;i++){
        free(a[i]);
        a[i]=NULL;
    }
    free(a);
    
}

void Sort(char **a, int n){
    char *temp=NULL;
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{ char** p; int n,i;  scanf("%d",&n);  getchar();
  p = Input(n);
  Sort(p,n);
   for(i=0; i<n; i++) printf("%s\n",p[i]);
  Free(p,n);
   return 0;
}


