#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,i,j,k,m;
    char str[11][51];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;str[j][k]!='\0';k++)
        {
            if(str[j][k]!='Z')
            str[j][k]++;
            else
                str[j][k]='A';
        }
    }
    for(m=0;m<n;m++)
    {
        if(m==0)
            printf("case #%d: %s",m,str[m]);
        else
            printf("\ncase #%d: %s",m,str[m]);
    }
   return 0;
}
