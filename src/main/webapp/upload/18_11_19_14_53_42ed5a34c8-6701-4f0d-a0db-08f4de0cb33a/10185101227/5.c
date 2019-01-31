#include <stdio.h>
#include <stdlib.h>
int GDB (int a,int b)
{
    int y;
    if (b==0) y=a;
    else y=GDB(b, a%b);
    return y;
}

int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d",GDB(x,y));
   return 0;
}

