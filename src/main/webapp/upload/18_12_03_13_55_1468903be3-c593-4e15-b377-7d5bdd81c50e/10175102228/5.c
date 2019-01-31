#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int rotation(char s1[],char s2[])
{  char s3[161];
   strcpy(s3,s2);
  int len1=strlen(s1),len2=strlen(s2);
   if(len1!=len2)return 0;
   int i,j;
   for(i=0;i<len1;i++)
   { s3[i+len1]=s2[i];
    }
    for(i=0;i<len1;i++)
    {  int k;
        for(j=0,k=i;j<len1&&s1[j]==s3[k];j++,k++);
        if(j==len1)return 1;

     }
 return 0;

}
int main()
{ char s1[81],s2[81];
 scanf("%s %s",s1,s2);
  if(rotation(s1,s2))printf("\"%s\" is a rotation of \"%s\"",s1,s2);
   else printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
return 0;
}
