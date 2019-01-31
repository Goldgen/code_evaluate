#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char**Input(int n){
    int i,j;
    char **ldy=(char**)malloc(n*sizeof(char*));
    for(i = 0; i < n; i++)
    {
		ldy[i]=(char*)malloc(50);
        gets(ldy [i]);
		char *t=ldy [i];
		j=strlen(ldy [i]);
        *(t+j)='\0';
    }
        return ldy;
}
void Free(char**a,int n){
    int i;
    for(i = 0; i < n ;i++)
    {
        free(a[i]);
       
    }
}
void Sort(char **a,int n){
    int k,b;
    char*s=NULL;
    for(k=0;k<n;k++)
    for(b=0;b<n-k-1;b++)
    {
       if(strcmp(a[b],a[b+1])>0)
       {
           s=a[b];
           a[b]=a[b+1];
           a[b+1]=s;
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
