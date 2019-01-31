#include <stdio.h>
void dx(char *a,int i);
int main()
{char data[200];
gets(data);
dx(data,0);
return 0;}
void dx(char *a,int i)
{if(a[i]!='?')
{dx(a,i+1);
printf("%c",a[i]);}}