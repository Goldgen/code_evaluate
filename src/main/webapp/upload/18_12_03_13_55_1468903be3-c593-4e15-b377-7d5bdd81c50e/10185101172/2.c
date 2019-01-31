#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    char s[n][30];
    char min[30];
    for(i=0;i<n;i++)
        gets(s[i]);
     for(i=0;i<n-1;i++)
  {
      for(j=1;j<n-i;j++)
      {
          if(strcmp(s[j],s[j-1]<0))
            {strcpy(min,s[j]);
            strcpy(s[j],s[j-1]);
            strcpy(s[j-1],min);
            }
      }
  }
  for(i=0;i<n;i++)
  {
      puts(s[i]);
      if(i!=n-1)
        printf("\n");
  }
   return 0;
}
