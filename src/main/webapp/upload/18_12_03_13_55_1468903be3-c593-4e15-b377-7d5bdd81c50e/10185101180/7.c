#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *p,*q;
    int i,j,n;
   char str[81];
   gets(str);
   p=&str[0];
   q=&str[0];
  for(i=0,n=0;*p!='\0';p++)
  {
      if(*p!=' ')
      {
          i++;
      }
      if(i>n)
          {
              n=i;
              q=p-n+1;
          }
      if(*p==' ')
      {
          i=0;
      }
  }
  for(j=0;j<n;j++)
  {
      printf("%c",*(q+j));
  }
  return 0;
}
