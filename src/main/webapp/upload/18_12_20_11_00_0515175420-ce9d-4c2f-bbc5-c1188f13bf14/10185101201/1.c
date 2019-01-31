#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char**Input(int n){
    int i,j;
    char **ddd=(char**)malloc(n*sizeof(char*));
    
    for(i = 0; i < n; i++)
    {
		ddd[i]=(char*)malloc(50);
        gets(ddd[i]);
		char *t=ddd[i];
		j=strlen(ddd[i]);
        *(t+j)='\0';
    }
        return ddd;
}
void Free(char**a,int n){
    int i;
    for(i = 0; i < n ;i++)
    {
        free(a[i]);
       
    }
}
void Sort(char **a,int n){
    int g,b;
    char*f=NULL;
    for(g=0;g<n;g++)
    for(b=0;b<n-g-1;b++)
    {
       if(strcmp(a[b],a[b+1])>0)
       {
           f=a[b];
           a[b]=a[b+1];
           a[b+1]=f;
       }
    }
}
int main()
{ char** p; int n,i;  scanf("%d",&n);  getchar();
  p = Input(n);
  Sort(p,n);
   for(i=0; i<n; i++)
	   printf("%s\n",p[i]);
  Free(p,n);
   return 0;
}
