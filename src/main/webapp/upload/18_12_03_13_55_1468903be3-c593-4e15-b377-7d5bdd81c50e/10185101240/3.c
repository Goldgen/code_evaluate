#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[80];
    char str2[80];
    scanf("%s %s",str1,str2);
    int m,n,k,p;
    m=strlen(str1);
    n=strlen(str2);
    k=m>n?n:m;
    p=m>n?m:n;
    int i=0;
    int j;
    while(i<k){
        printf("%c%c",str1[i],str2[i]);
        i++;
    }
    for(j=k;j<p;j++){
    if(m>n)
        printf("%c",str1[j]);
    else
        printf("%c",str2[j]);}

  return 0;

}
