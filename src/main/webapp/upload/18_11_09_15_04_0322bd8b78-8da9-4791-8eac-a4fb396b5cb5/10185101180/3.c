#include <stdio.h>
int main()
{
  int a='a',b='e',c='i',d='o',e='u',f='A',g='E',h='I',i='O',j='U',x,n;
  while(x=getchar()!=EOF)
  {
      n=0
      if(x=a||x=b||x=c||x=d||x=e||x=f||x=g||x=h||x=i||x=j)
        n++;
  }
  if(n==0)
    printf("no");
  else
    printf("yes");
  return 0;
}
