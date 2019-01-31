#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     int n,i,j;
     scanf("%d",&n);
     getchar();
    char s[n][50];
    for(i=0;i<n;i++)
    {
        gets(s[i]);
    }
    char temp[90];
    for(i=0;i<n;i++)
    {
        for(j=n-2;j>=i;j--)
        {
            if(strcmp(s[j],s[j+1])<0)
            {
                //printf("s[%d]=%s\ns[%d]=%s\n",j,s[j],j+1,s[j+1]);
                strcpy(temp,s[j+1]);
                strcpy(s[j+1],s[j]);
                strcpy(s[j],temp);
                //printf("s[%d]=%s\ns[%d]=%s\n",j,s[j],j+1,s[j+1]);
            }
        }
	}
    for(i=0;i<n;i++)
    {
      printf("%s\n",s[i]);
    }

  return 0;
}
