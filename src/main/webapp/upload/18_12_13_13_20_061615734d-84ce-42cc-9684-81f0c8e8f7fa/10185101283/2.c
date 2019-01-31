#include<stdio.h>
#include<string.h>
char * strmcpy(char * t,const char * s,int m){
    char *p=t;
  for(int i=0;(*s)!='\0';++i)
  {
      if(i>=m)
      {
        *p=*s;
        ++p;
      }
      ++s;
  }
  *p='\0';
  return t;
}
int main()
{
    char s[80];
    char t[80];
    int m;
    gets(s);
    scanf("%d",&m);
    puts(strmcpy(t,s,m));
    return 0;
}
