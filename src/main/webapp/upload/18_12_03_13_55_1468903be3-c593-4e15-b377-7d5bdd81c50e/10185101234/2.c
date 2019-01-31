#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j,k,m;
    scanf("%d",&n);
    char arr[n+1][30];
    char temp[30];
    for(i=0;i<n+1;i++)
    {
        gets(arr[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n-j;k++)
        {
            if(strcmp(arr[k],arr[k+1])<0)
            {
                strcpy(temp,arr[k]);
                strcpy(arr[k],arr[k+1]);
                strcpy(arr[k+1],temp);
            }
        }
    }
    for(m=0;m<n;m++)
        {
                puts(arr[m]);
        }
    return 0;
}
