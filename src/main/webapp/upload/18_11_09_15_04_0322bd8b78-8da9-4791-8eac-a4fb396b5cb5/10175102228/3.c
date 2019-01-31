#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{  char c[20];
 scanf("%s",c);
  int l=strlen(c);
  int i;
  for(i=0;i<l;i++)
  { if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U')
    {printf("yes");
    break;
    }
   }
   if(i==l)printf("no");
   return 0;
}