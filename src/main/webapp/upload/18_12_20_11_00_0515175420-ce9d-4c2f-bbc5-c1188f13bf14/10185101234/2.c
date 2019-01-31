#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** Input(int n)
{
    int i;
    char** p=malloc(n*sizeof(char*));
    for(i=0;i<n;i++)
    {
        *(p+i)=malloc(100*sizeof(char));
        gets(*(p+i));
    }
    return p;
}
void Free(char** q,int n)
{
    int i;
    for(i=0;i<n;i++)
        free(*(q+i));
    free(q);
}
void Sort(char** r,int n)
{
    int i,j;
   char* temp=malloc(100*sizeof(char));
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
        {
            if(strcmp(*(r+i),*(r+j))>0)
          {
            strcpy(temp, *(r+i));
            strcpy(*(r+i), *(r+j));
            strcpy(*(r+j), temp);
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
   p=Input(n);
   Sort(p,n);
  for(i=0;i<n;i++)
    printf("%s\n",p[i]);
  Free(p,n);
   return 0;
}