#include<stdio.h>
#include<string.h>
int main()
{
 char s1[81],s2[81];
 scanf("%s %s",&s1,&s2);
 int len=strlen(s1);
 int i,j;
 char t;
 char m1[81],m2[81];
 strcpy(m1,s1);
 strcpy(m2,s2);

 for(i=0;i<len;i++)
 {
  t=s1[0];
  for(j=0;j<len-1;j++)
  {
   s1[j]=s1[j+1];
  }
  s1[len-1]=t;

  if(strcmp(s1,s2)==0)
  {
   printf("\"%s\" is a rotation of \"%s\"",m1,m2);
   return 0;
  }
 }

 printf("\"%s\" is NOT a rotation of \"%s\"",m1,m2);

 return 0;

}
