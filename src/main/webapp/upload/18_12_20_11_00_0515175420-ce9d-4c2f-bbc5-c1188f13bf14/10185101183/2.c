#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int t;int k=0;int m;int tem[t];
   scanf("%d",&t);
   char a[t][201];
   char b[500][30];
   gets(a[0]);
   for(int i=0;i<t;++i)
   {
    gets(a[i]);
   }
   for(int i=0;i<t;++i)
   {
       for(int j=0;a[i][j]!='\0';++j)
       {
           if(a[i][j]==' ')
            {
                ++k;
                m=0;
                continue;
            }
           b[k][m]=a[i][j];
       }
       for(int j=0;j<t;++j)
        tem[j]=j;
       for(int j=0;j<k;j++)
       {
           for(m=j+1;m<k+1;m++)
           {
               if(strcmp(b[tem[j]],b[tem[m]])>0)
               {
                   int t=tem[j];
                   tem[j]=tem[m];
                   tem[m]=t;
               }
           }
       }
       for(int j=0;j<k+1;j++)
        printf("case #j:\n%s\n",b[tem[j]]);
   }


}
