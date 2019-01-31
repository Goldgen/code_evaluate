#include <stdio.h>
#include <string.h>
void longestword(char a[])
{
  int i,j=0,k=0,c,max=0,m,n=0;
  char b[100][100];
  c=strlen(a);
  for(i=0;i<c;i++)
  {
    if(a[i]!=' '&&a[i]!='\0')
    {
	  b[j][k]=a[i]; 
      k++;
    }
  else {
	  b[j][k]='\0';
	  j++; 
	  k=0;}
  }
 for(i=0;i<=j;i++){ 
   if(max<strlen(b[i]))
  {
	   max=strlen(b[i]); 
	   m=i; 
   }
 }
	printf("%s",b[m]);
/*for(n=0;n<=j;n++)
if(strlen(b[n])==strlen(b[m]))*/
}
void main()
{
 char a[100];
 gets(a);
 longestword(a);
 printf("\n");
 return 0;
}