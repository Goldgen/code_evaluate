#include<stdio.h>
#include<string.h>

int main (void)
{
    int n = 0;
    int i = 0;
    int j = 0;
    scanf("%d",&n);
    char str[n][31];
    char arrange[n];
    char mid[31] = "0";
    getchar();
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        arrange[i] = i;
    }

    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(strcmp(str[j],str[j-1])>0)
            {
                strcpy(mid,str[j-1]);
                strcpy(str[j-1],str[j]);
                strcpy(str[j],mid);
            }
        }
    }

    for(i=0;i<n;i++)
    {
        puts(str[arrange[i]]);
    }
}
