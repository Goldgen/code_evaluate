#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char s[80];
  gets(s);
  int len=strlen(s);
  int i,j;
  for(i=0,j=len-1;i<len&&s[i]==s[j];i++,j--);
  if(i==len)printf("True");
   else printf("False");

     return 0;
}
