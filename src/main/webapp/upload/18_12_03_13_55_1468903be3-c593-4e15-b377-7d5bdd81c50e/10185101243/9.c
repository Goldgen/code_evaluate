
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{

	char s[100];
	char p[100];
	gets(s);
	scanf("%s",p);
	int i,j,m,t,n;

	int ans=0;
		for(j=0;j<strlen(s);j++)
        {
          for(i=0;i<strlen(p);i++)
          {
              if(s[i+j]==p[i])
                m=0;
              else
              {
                  m=1;
                  break;
              }
          }
          if(m==0)
            ans++;

        }

        for(j=0;j<strlen(s);j++)
        {
          for(i=0;i<strlen(p);i++)
          {
              if(s[i+j]==p[i])
                n=0;
              else
              {
                  n=1;
                  break;
              }
          }
          if(n==0)
            {t=j;
            break;
            }
        }
        if(ans==0)
            t=-1;
	printf("%s: %d time(s), first at %d",p,ans,t);
	return 0;
}