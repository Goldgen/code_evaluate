#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count(char*str,char*substr)
{
int i,j,k,num=0;
for(i=0;str[i];i++) {
for(j=i,k=0;substr[k]==str[j];k++,j++){
if(substr[k+1]=='\0')
{
num++;
break; 
}
}
}
return(num);
}
int main()
{
    char M[100];
    char C[100];
    gets(M);
    scanf("%s",C);
    int i=0;
    int n=0;
    int j=0;
    int l1;
    int l2;
    int k;
l1 = strlen(C);
l2 = strlen(M);
j = (l2-l1);

for (i=0;i<j;i++){
  for (k=0;k<l2;k++)
    {
     if(M[i+k]!=C[k])  break;
     if(k==l1)  break;
      }
    if (i<j) i++;
    else i=0;
}
n = count(M, C);
printf("%s: %d time(s), first at %d",C,i-1,n);
return 0;
}
