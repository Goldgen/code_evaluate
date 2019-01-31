#include <stdio.h>
#include <string.h>


int hex2int(char s[]);

int main()
{
   char s1[80],s2[80],s3[80];
   scanf("%s %s",s1,s2);
   int i,j,result=0;
   char temp=0;
   for(i=0;i<strlen(s1);i++)
    s3[i]=s1[i];
   if(strlen(s1)!=strlen(s2))
    printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
   else{
   int len=strlen(s1);
   for(i=0;i<len;i++)
   {
   temp=s1[0];
    for(j=0;j<len-1;j++)
       s1[j]=s1[j+1];
   s1[len-1]=temp;
     if(strcmp(s1,s2)==0)
     {printf("\"%s\" is a rotation of \"%s\"",s3,s2);
     result=1;
     break;}
   }
   if(!result)
    printf("\"%s\" is NOT a rotation of \"%s\"",s3,s2);
   }
   return 0;
}

