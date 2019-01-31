#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a,b,c,x,i,j,m,n;
    int y;
  char s1[1000];
  char s2[1000];
  char ss[2000];
  gets(ss);
  while(ss[0]!='#')
  {
    for(i=0;ss[i]!=' ';i++)
    {
        s1[i]=ss[i];
    }
    s1[i]='\0';
    i++;
    while(ss[i]==' ')
    {
        i++;
    }
    for(j=0;ss[i]!='\0';i++)
    {
        s2[j]=ss[i];
        j++;
    }
    s2[j]='\0';
    m=strlen(s2);
    n=strlen(s1);
    if(m>n)
        printf("0\n");
    else
    {
       for(y=0,a=0;m<=n-a;a++)
       {
           for(b=a,c=0,x=0;s2[c]!='\0';b++,c++)
           {
               if(s1[b]!=s2[c])
                x++;
           }
           if(x==0)
            y++;
            a=a+m-1;
       }
       printf("%d\n",y);
    }
    gets(ss);
  }
  return 0;
}
