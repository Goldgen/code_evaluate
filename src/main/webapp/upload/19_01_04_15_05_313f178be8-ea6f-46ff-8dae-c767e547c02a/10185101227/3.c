#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  char str[1001];
  char a[1001];
  char o;
  int s=0;
  while ((o=getchar())!='#')
  {
      scanf("%s",str);
      scanf("%s",a);
      getchar();
      char *ptr=str;
      while(ptr=strstr(ptr,a))
      {
          ++s;
          ++ptr;
      }
      printf("%d\n",s);
      s=0;
  }
}

