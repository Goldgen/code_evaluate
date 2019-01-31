#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int n=0;
    scanf("%d",&n);
    getchar();
    char arr[n][31];
    for(int i=0;i<n;++i)
    {
        gets(arr[i]);
    }
    char temp[31];
    for(int j=0;j<n-1;++j)
    {
        for(int i=0;i<n-1-j;++i)
        {
            if(strcmp(arr[i],arr[i+1])>0)
            {
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[i+1]);
                strcpy(arr[i+1],temp);
            }
        }
    }
    for(int k=0;k<n;++k)
      printf("%s\n",arr[k]);
   return 0;
}
