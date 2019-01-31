#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   char s1[80],s2[80];
    scanf("%s",s1);
    scanf("%s",s2);
    char s3[160];
    int l1=strlen(s1);
    int l2=strlen(s2);
    int i,j;
    int cnt=0;
    for(i=0,j=0;i<l1&&j<l2;)
    {  if(cnt%2)s3[cnt++]=s2[j++];
     else s3[cnt++]=s1[i++];
     }
     while(j<l2)
    s3[cnt++]=s2[j++];
    while(i<l1)
      s3[cnt++]=s1[i++];
    printf("%s",s3);
    return 0;
}
