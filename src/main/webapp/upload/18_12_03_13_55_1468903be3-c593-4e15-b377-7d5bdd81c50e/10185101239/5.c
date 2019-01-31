#include<stdio.h>
#include<string.h>
int main()
{
 char s1[100];
 char s2[100];
 char ss1[100];
 scanf("%s" ,s1);
 scanf("%s" ,s2);
 strcpy(ss1,s1);

 int len=strlen(s1);
 int i,j;
 int index=1;
 char temp;

 for(i=0;i<len;i++)
 {
  temp=s1[0];
  for(j=0;j<len-1;j++)
  {
   s1[j]=s1[j+1];

  }
  s1[len-1]=temp;
  if(strcmp(s1,s2)==0)
  {

printf("\"%s\" is a rotation of \"%s\"",ss1,s2);
   index++;
   break;
  }}

if(index==1)
{
 printf("\"%s\" is NOT a rotation of \"%s\"",ss1,s2);
 }
 return 0;
}