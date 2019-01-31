#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char str[101];
  char x[101];
  int s=0,sum=0;
  int l=0,i=0,k=0;
  gets(str);
  char *ptr=str;
  while (l<strlen(str))
  {
    x[l]=str[l];
    for(i=0;i<strlen(x);++i)
    {
        if (str[l]==x[i]) ++s;
    }
    if(s==1&&str[l]!=' ')
 {while ((ptr=strchr(ptr,str[l])))
  {
     ++sum;
     ++ptr;
  }
  if (k==0) printf("%c %d;",str[l],sum);
  else printf(" %c %d;",str[l],sum);
  sum=0;ptr=str;++k;
  }
  else s=0;
  ++l;
}
}
