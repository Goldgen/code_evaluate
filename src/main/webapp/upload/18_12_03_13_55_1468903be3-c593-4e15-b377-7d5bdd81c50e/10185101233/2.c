#include<string.h>
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char s[n][30];
    char k[30];
    for(int i=0;i<n;i++)
    {
        gets(s[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j],s[j+1])<0)
            {
                strcpy(k,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],k);
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%s",s[i]);
        printf("\n");
    }
    printf("%s",s[n-1]);
    return 0;
}