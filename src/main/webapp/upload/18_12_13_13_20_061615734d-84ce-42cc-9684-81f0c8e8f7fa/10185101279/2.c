#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>
char *strmcpy(char *dest,char *scr,int m);
int main()
{
   char a[90];
   char b[90];
   int m;
   gets(a);
   scanf("%d",&m);
   strmcpy(b,a,m);
   puts(b);
	return 0;
}
char *strmcpy(char *dest,char *scr,int m){
char *address=dest;
assert((dest!=NULL)&&(scr!=NULL));
scr+=m;
while(*scr!='\0'){
    *dest=*scr;
    dest++;
    scr++;

}
*dest='\0';
return address;

}

