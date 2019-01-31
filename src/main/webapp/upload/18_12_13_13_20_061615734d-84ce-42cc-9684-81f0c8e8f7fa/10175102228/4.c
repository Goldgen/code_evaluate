#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ int i,n;
scanf("%d",&n);
char s[51];
for(i=0;i<n;i++)
{ scanf("%s",s);
  char*p=s;
   while(*p!='\0')
   { if(*p<'Z')*p=*p+1;
      else if(*p=='Z')*p='A';
      p++;
   }
    printf("case #%d: %s\n",i,s);
}
return 0;
}
