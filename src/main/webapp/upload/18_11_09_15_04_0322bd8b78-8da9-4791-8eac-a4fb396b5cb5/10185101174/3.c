#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
  char c;
  int m=0;

   c=getchar();
  while(c!=EOF)
  {
    c=getchar();
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        m++;
    }
  }
  if(m==0)
    printf("no");
  else
    printf("yes");
  return 0;

}
