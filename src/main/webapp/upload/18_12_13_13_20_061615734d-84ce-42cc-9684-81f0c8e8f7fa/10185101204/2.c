#include <stdio.h>
char* strmcpy(char* ss,char* tt,int mm);
int main()
{char s[81]={0},t[81]={0};
int m;
gets(s);
scanf("%d",&m);
strmcpy(s,t,m);
puts(t);
return 0;}
char* strmcpy(char* ss,char* tt,int mm)
{for(int i=mm;ss[i]!='\0';i++)
tt[i-mm]=ss[i];
return tt;}