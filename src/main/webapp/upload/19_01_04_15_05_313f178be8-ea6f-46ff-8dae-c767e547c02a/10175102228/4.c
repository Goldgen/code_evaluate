#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{ int a[128]={0};
  char s[101];
   gets(s);
    int i;
  int l=strlen(s);
  for(i=0;i<l;i++)
  { if(s[i]!=' ')
    { int x=s[i];
       a[x]++;
    }
  }
  for(i=0;i<l;i++)
  { if(s[i]!=' '&&a[s[i]]!=0)
   {printf("%c %d; ",s[i],a[s[i]]);
     a[s[i]]=0;
    }
  }
    return 0;
}