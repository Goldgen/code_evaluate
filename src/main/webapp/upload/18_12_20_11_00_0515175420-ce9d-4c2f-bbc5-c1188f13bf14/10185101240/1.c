#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
char**Input(int n){
    int i,j;
    char **output;
    output=(char**)malloc(n*sizeof(char*));
    
    for(i = 0; i < n; i++)
    {
		output[i]=(char*)malloc(50);
        gets(output[i]);
		char *t=output[i];
		j=strlen(output[i]);
        *(t+j)='\0';
    }
        return output;
}
void Free(char**a,int n){
    int i;
    for(i = 0; i < n ;i++)
    {
        free(a[i]); 
    }
}
void Sort(char **a,int n){
    int b;
    char*tmp=NULL;
    for(int r=0;r<n;r++)
    for(b=0;b<n-r-1;b++)
    {
       if(strcmp(a[b],a[b+1])>0)
       {
           tmp=a[b];
           a[b]=a[b+1];
           a[b+1]=tmp;
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