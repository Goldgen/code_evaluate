#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char*strcmpy(char*t,char*s,int m)
{ while(m--)
   { s++;
    }
    char *p=t;
    while(*s!='\0')
        *p++=*s++;
        *p='\0';
    return t;
}
int main()
{ char s[85];
gets(s);
int  m;
scanf("%d",&m);
char t[85];
printf("%s",strcmpy(t,s,m));
return 0;

}
