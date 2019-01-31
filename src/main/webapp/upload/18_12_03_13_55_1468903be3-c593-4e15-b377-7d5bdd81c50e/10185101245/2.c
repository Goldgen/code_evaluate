#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    char str[n][31];
    int j=0;
    int m=0;
    char x[n][31];
    for(j=0;j<n;j++)
        gets(str[j]);
   for(m=0;m<n-1;m++)
   {

    for(j=0;j<n-1-m;j++)
    {
        if(strcmp(str[j],str[j+1])<0)
        {
            strcpy(x[j],str[j+1]);
            strcpy(str[j+1],str[j]);
            strcpy(str[j],x[j]);
        }
    }
   }
    for(j=0;j<n;j++)
    {
        printf("%s",str[j]);
     if(j!=n-1)
        printf("\n");
    }
    return 0;
}
