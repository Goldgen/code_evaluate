#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int check(char *s1,char*s2)
{ int l1=strlen(s1),l2=strlen(s2);
   int i,j;
   int sum=0;
   for(i=0;i<=l1-l2;i++)
   {   int k;
       for(j=i,k=0;k<l2;j++,k++)
     {if(s1[j]!=s2[k])
       break;
     }
    if(k==l2)
     { sum++;
      i=i+l2-1;
     }
   }
   return sum;
}
int main()
{ char s[1001],s1[1001];
while(scanf("%s",s)&&strcmp(s,"#")!=0)
 { scanf("%s",s1);
     printf("%d\n",check(s,s1));
 }
 return 0;
}