#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char** Input(int n);

void Free(char**a, int n);

void Sort(char **a, int n);

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

char** Input(int n)
{
	char**a;//二级指针 
	int i,j;
	
	a=(char**)malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
        a[i]=(char*)malloc(31*sizeof(char));//分配动态数组 
        
    for(j=0;j<n;j++)
        gets(a[j]);
    return a;
} 

void Sort(char **a, int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(a[i],a[j]) >0 )
			{
				char* temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
}
void Free(char**a, int n)
{
	for(int i=0;i<n;i++)
		{
			free(a[i]);
			a[i] = NULL;
		}
	free(a);
}
		