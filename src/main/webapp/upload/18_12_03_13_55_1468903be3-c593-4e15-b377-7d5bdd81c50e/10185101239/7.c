#include<stdio.h>
#include <string.h>
char max(char a[])
{
     int i,j;
     int count=0;
     int max=0;
     char b[100];
     int k;
     for(i=0; i<=strlen(a);i++)
     {
         if(a[i]!=' '&&a[i]!= '\0')
             count++;
        else if(a[i]==' '||a[i]=='\0')
         {
             if(max<count)
             {
                 k=0;
                 max=count;
                 for(j=i-max;j<i;j++)
                     b[k++]=a[j];
                     
             }b[k]='\0';
              count=0;
         }
     }
     puts(b);
}
int main()
{
    char a[100];
    gets(a);
    max(a);
return 0;
}
