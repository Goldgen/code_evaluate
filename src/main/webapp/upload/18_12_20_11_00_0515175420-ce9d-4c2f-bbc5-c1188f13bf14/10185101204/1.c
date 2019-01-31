#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n)
{char **data;
data=(char**)malloc(n*31*sizeof(char*));
for(int i=0;i<n;i++)
data[i]=(char*)malloc(31*sizeof(char));
if(data!=NULL)
for(int j=0;j<n;j++)
    gets(data[j]);
    return data;}
void Free(char**a, int n)
{free(a);}
void Sort(char **a, int n)
{char ch[31];
for(int i=0;i<n-1;i++)
{for(int j=0;j<n-i-1;j++)
{if(strcmp(a[j+1],a[j])<0)
{strcpy(ch,a[j+1]);
strcpy(a[j+1],a[j]);
strcpy(a[j],ch);}}}}
int main()
{ char** p; int n;  scanf("%d",&n);  getchar();
 p = Input(n);
  Sort(p,n);
   for(int i=0; i<n; i++) printf("%s\n",p[i]);
  Free(p,n);
   return 0;
}