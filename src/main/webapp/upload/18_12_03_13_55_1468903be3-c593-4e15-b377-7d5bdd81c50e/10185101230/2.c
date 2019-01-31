#include <stdio.h>
#include <string.h>

int main()
{
	int j,k,n,i;
    char s[50][50],t[50];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
    gets(s[i]);
    for(i=0;i<n;i++)
 {
  k=i;
  for(j=i+1;j<n;j++)
    if(strcmp(s[j],s[k])<0)
        k=j;
  strcpy(t,s[i]);
  strcpy(s[i],s[k]);
  strcpy(s[k],t);
 }
 for(i=n;i>0;i--)
   puts(s[i]);
printf("%s",s[0]);
 return 0;
}
