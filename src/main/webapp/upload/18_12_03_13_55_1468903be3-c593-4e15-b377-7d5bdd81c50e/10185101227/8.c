#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{int j=0;
 char a[81],x[81],y[81];
 gets(a);
 for(int i=0;i<strlen(a);++i)
 {
   x[i]=a[i];
 }
 int l=strlen(a);
 for(int i=0;i<strlen(a);++i)
 {
    y[i]=a[l-1];
        --l;
 }
 for(int i=0;i<strlen(a);++i)
 {
     if (x[i]!=y[i]&&x[i]!='\0') ++j;
 }
 if (j==0) printf("True");
 else printf("False");
 }
