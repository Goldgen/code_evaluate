#include<stdio.h>
void print (int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%c",n%10+'0');
}
int main()
{
  int n;
  scanf("%d",&n);
  print(n);
  return 0;
}
