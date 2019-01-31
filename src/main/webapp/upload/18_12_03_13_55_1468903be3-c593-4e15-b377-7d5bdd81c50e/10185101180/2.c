#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,j,k,b;
    char str[11][31];
    char z[31];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str[i]);
    }
    for(j=0;j<n-1;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(strcmp(str[k],str[k+1])<0)
            {
               strcpy(z,str[k]);
               strcpy(str[k],str[k+1]);
               strcpy(str[k+1],z);
            }
        }
    }
     for(b=0;b<n;b++)
   {
       if(b==0)
        printf("%s",str[b]);
       else
        printf("\n%s",str[b]);
   }
   return 0;
}
