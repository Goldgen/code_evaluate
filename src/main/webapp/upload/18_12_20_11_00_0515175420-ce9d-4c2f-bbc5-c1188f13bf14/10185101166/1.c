#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char**Input(int n){
    int m,u;
    char **riri=(char**)malloc(n*sizeof(char*));
    
    for(m = 0; m < n; m++)
    {
		riri[m]=(char*)malloc(50);
        gets(riri[m]);
		char *t=riri[m];
		u=strlen(riri[m]);
        *(t+u)='\0';
    }
        return riri;
}
void Free(char**a,int n){
    int i;
    for(i = 0; i < n ;i++)
    {
        free(a[i]);
       
    }
}
void Sort(char **a,int n){
    int q,b;
    char*f=NULL;
    for(q=0;q<n;q++)
    for(b=0;b<n-q-1;b++)
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
