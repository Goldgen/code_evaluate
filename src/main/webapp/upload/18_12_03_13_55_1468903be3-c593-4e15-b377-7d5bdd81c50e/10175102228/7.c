#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char s[80];
  gets(s);
  int i,j;
  int len=strlen(s);
  int cnt=0,l1=0;
  int locate=0;
  for(i=0;i<len;i++)
  { if(s[i]!=' ')cnt++;
     else
     { if(cnt>l1)
      {l1=cnt;
       locate=i-1;
      }
      cnt=0;
     }
    }
    if(cnt>l1)
      {l1=cnt;
       locate=i-1;
      }
    for(j=locate-l1+1;j<locate+1;j++)
    { printf("%c",s[j]);

    }
    printf("\n");

     return 0;
}
