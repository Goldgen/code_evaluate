#include <stdio.h>
int main()
{ int b=0;
  char a;
  while(1)
  {a=getchar();
  if(a<='A')
    a=a+32;
   if(a=='\n')
    {printf("no");
    break;}
  switch(a)
  {case'a':case'e':case'i':case'o':case'u':
  b=1;
  break;
  default:
  b=0;
  break;}
 if(b==1)
    {printf("yes");
    break;}
}}