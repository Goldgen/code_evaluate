#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char** Input(int n){
    char**  p= (char**)calloc(n,sizeof(char*));
    for(int i=0;i<n;i++){
        *(p+i) = (char*)calloc(100,sizeof(char)); 
        gets(*(p+i));
    }
    
	return p;
}

void Free(char**a, int n){
    free(*a);
    *a=NULL;
}


void Sort(char **a, int n){
    char t[100];
    
    for (int i=0;i<n-1;i++)
	{
		for (int j=0;j<n-i-1;j++)
		{
        if (strcmp(*(a+j),*(a+j+1))>0)
        {
            strcpy(t,*(a+j));
            strcpy(*(a+j),*(a+j+1));
            strcpy(*(a+j+1),t);
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

   for(i=0; i<n; i++)
   printf("%s\n",p[i]);
   Free(p,n);

   return 0;
}

