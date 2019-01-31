#include <stdio.h>
#include<string.h>
void strmcpy(char *s,char *t,int m)
{
int n=0;
  while(n<m){n++;s++;}
  while(*s!='\0'){
  *t=*s;
  s++;
  t++;
}
*t='\0';
}

int main()
{
int m;
char t[100],s[100];
  gets(s);
  scanf("%d",&m);
  strmcpy(s,t,m);
  printf("%s\n",t);
}