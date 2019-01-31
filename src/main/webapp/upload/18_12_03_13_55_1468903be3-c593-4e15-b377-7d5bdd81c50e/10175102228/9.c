#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{ char s1[80],s2[80];
  int i,j;
  gets(s1);
  int len=strlen(s1);
  scanf("%s",s2);
  int len2=strlen(s2);
  int cnt=0,first=-1;
  for(i=0;i<=len-len2;i++)
  { int k=i;
      for(j=0;j<len2;j++)
     { if(s1[k++]!=s2[j])
        break;
     }if(j==len2&&cnt==0)
      {cnt++;
       first=i;
       }
       else if(j==len2)
        cnt++;
  }
printf("%s: %d time(s), first at %d",s2,cnt,first);
return 0;
}