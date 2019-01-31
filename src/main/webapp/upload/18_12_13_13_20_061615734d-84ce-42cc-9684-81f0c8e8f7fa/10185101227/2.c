#include <stdio.h>
void strmcpy(char *x,char *y)
{
 while(*x!='\0')
 {
     *y=*x;
     ++y;
     ++x;
 }
 *y='\0';
}
int main()
{
 char s[81];
 char t[81];
 int n;
 char *flag=s;
 gets(s);
 scanf("%d",&n);
 flag+=n;
 strmcpy(flag,t);
 puts(t);
    return 0;
}

