#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char** Input(int n);
void Free(char **p,int n);
void Sort(char **p,int n);
int main()
{
	char** p; int n,i;  scanf("%d",&n);
getchar();

  p = Input(n);


  Sort(p,n);

   for(i=0; i<n; i++) printf("%s\n",p[i]); 
  Free(p,n);

   return 0;
	
}
char** Input(int n)
{
	char **p =(char**) malloc(80*sizeof(char*));
	int i = 0;
	for(i = 0;i < n;i++)
	{
		*(p+i) = (char*)malloc(80*sizeof(char));
		gets(*(p+i));
	}
	*(p+i) = (char*)malloc(80*sizeof(char));
	return p;
}
void Free(char**p, int n)
{
	for(int i=0;i<n;i++)
	{
        free(*(p+i));                        
    }
	free(p);
 
}
void Sort(char **a, int n)
{
	char* temp;
	int m=0;
	 for(int i=0;i<n;i++)
    {	m=0;
    	while(*a[m+1]!=0)
		{if(strcmp(a[m],a[m+1])>0)
			{
				temp=a[m];
				a[m]=a[m+1];
				a[m+1]=temp;
			}
			m++;
			}
			
		
	}
} 
