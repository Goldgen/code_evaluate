#include <stdio.h>
void fx(char *x)
{
    if (*x=='?') ;
    else { ++x;
      fx(x);
      --x;
      printf("%c",*x);
    }
}
int main() {
  char a[300];
  gets(a);
  fx(a);
  return 0;
}
