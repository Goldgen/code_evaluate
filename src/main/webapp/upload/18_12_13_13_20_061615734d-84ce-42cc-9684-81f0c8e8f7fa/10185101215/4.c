#include<stdio.h>
#include<string.h>
int main()
{
   int i,n,j;
   char a[100][100];
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
     gets(a[i]);
     for(i=0;i<n;i++)
     for(j=0;a[i][j]!='\0';j++)
     {
         if(a[i][j]>='A'&&a[i][j]<'Z')
            a[i][j]=a[i][j]+1;
         else if(a[i][j]=='Z')
            a[i][j]='A';
     }
     for(i=0;i<n;i++)
     {
     printf("case #%d: ",i);
     printf("%s\n",a[i]);
     }
  return 0;
}