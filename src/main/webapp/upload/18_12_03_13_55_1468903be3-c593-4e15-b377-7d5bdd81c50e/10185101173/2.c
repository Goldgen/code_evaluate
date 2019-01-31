#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0,m=0,p=0;
    scanf("%d",&n);
    char arr[n][40];
    getchar();
    for(int i=0;i<n;++i)
        gets(arr[i]);
    char max[40],temp[40];
    strcpy(max,arr[0]);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(strcmp(max,arr[i+1+j])<0)
            {
                strcpy(max,arr[i+1+j]);
                m=i+1+j;
                p=1;
            }
        }
        if(p!=0)
        {
            strcpy(temp,arr[i]);
            strcpy(arr[i],max);
            strcpy(arr[m],temp);
            strcpy(max,arr[i+1]);
        }
        p=0;
    }
    for(int i=0;i<n;++i)
    {
        if(i==n-1)
            printf("%s",arr[i]);
        else
            printf("%s\n",arr[i]);
    }
    return 0;
}
