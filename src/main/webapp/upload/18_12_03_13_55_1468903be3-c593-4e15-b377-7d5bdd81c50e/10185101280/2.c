#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    char byte[n][31],temp[31];
    int i=0,j=0;
    for(i=0;i<n;i++)
        gets(byte[i]);
        for(j=0;j<n-1;j++)
    {
            for(i=0;i<n-1-j;i++)
            {
                if((strcmp(byte[i],byte[i+1]))<0)
                {
                    strcpy(temp,byte[i]);
                    strcpy(byte[i],byte[i+1]);
                    strcpy(byte[i+1],temp);
                }
            }
    }

    for(i=0;i<n;i++)
    {
         puts(byte[i]);
    }
    return 0;
}
