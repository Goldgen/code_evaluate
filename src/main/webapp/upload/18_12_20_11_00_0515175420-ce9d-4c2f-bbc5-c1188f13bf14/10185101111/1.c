#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int n;
char **Input(int n,char *ptr_array[]){
    for(int m=0;m<n;m++){
        ptr_array[m]=(char *)malloc(35*sizeof(char));
        gets(ptr_array[m]);
    }
    return ptr_array;
}
void Sort(char **p,int n){
    char *p1;
    p1=(char*)malloc(35*sizeof(char));
    for(int x=0;x<n-1;x++)
        for(int y=x+1;y<n;y++)
    if(strcmp(*(p+x),*(p+y))>0){
        strcpy(p1,*(p+x));
        strcpy(*(p+x),*(p+y));
        strcpy(*(p+y),p1);
    }
    free(p1);
    p1=NULL;
}
void Free(char **p,int n){
    for(int o=0;o<n;o++){
        free(*(p+o));
        *(p+o)=NULL;
    }
}
int main()
{
    scanf("%d",&n);
    char *ptr_array[n];
    char **pa;
    getchar();
    pa=Input(n,ptr_array);
    Sort(pa,n);
    for(int i=0;i<n;i++)
        printf("%s\n",*(pa+i));
    Free(pa,n);
}