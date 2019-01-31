#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 
char** Input(int n)
 {
 int i;
 	
  char** p= calloc(n,sizeof(char*));
    for(i=0;i<n;i++){
        *(p+i) = calloc(100,sizeof(char)); 
        gets(*(p+i)); }
        *(p+i)=calloc(100,sizeof(char));
        return p;
    }
       
void Free(char**p, int n)
{
for(int i=0;i<n;i++){
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
					{temp=a[m];
					a[m]=a[m+1];
					a[m+1]=temp;
					}
			m++;
			}
			
		
	}
} 

int main()
{ char** p; int n,i;  scanf("%d",&n);
getchar();

  p = Input(n);


  Sort(p,n);

   for(i=0; i<n; i++) printf("%s\n",p[i]); 
  Free(p,n);

   return 0;
}
