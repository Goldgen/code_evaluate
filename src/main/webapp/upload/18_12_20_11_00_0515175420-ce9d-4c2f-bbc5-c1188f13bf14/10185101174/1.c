#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char** Input(int n);
void Free(char**a, int n);
void Sort(char **a, int n);

int main()
{ char** p;
  int n,i;
  scanf("%d",&n);
  getchar();
  p = Input(n);
  Sort(p,n);
   for(i=0; i<n; i++)
    printf("%s\n",p[i]);
  Free(p,n);
//******************************************
   return 0;
}
char** Input(int n){
    char**a;//二级指针
	a=(char**)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++)
        a[i]=(char*)malloc(31*sizeof(char));
    for(int i=0; i<n; i++){
        gets(a[i]);
    }
    return a;
}
void Free(char**a, int n){
    free(a);
}
void Sort(char **a, int n){
    char temp[101];
    for(int i=1; i<n ;i++){
        for(int j=i; j>0; j--){
            if(strcmp(a[j],a[j-1])<0){
                strcpy(temp,a[j]);
                strcpy(a[j],a[j-1]);
                strcpy(a[j-1],temp);
            }
        }
    }
}
