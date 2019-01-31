#include <stdio.h>
#include <string.h>

int main()
{ char** p;
char* temp=NULL;
  int n,i,j=0;
  scanf("%d",&n);
  p=(char**)malloc(sizeof(char*)*n);
  temp=(char*)malloc(sizeof(char)*100);
  for(i=0;i<n;i++)
    *(p+i)=(char*)malloc(sizeof(char)*100);
//********** Input is called here **********
for(i=0;i<n;i++)
        gets(p[i]);
//******************************************
//********** Sort is called here ***********
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(strcmp(p[j],p[i])<0)
            {temp=p[i];
             p[i]=p[j];
             p[j]=temp;}
      }
  }
//******************************************
   for(i=0; i<n; i++)
   {if(i!=n-1)
    printf("%s\n",p[i]);
    else
        printf("%s",p[i]);}
    for(i=0;i<n;i++)
        free(p[i]);
//******************************************
   return 0;
}
