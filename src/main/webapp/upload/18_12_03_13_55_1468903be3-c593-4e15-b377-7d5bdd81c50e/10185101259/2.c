#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,j;
    scanf("%d\n",&n);
    char name[n][31],temp[31];
    for(i=0;i<n;i++)
        gets(name[i]);
    for(j=0;j<n-1;j++)
    {
            for(i=0;i<n-1-j;i++)
            {
                if((strcmp(name[i],name[i+1]))<0)
                {
                    strcpy(temp,name[i]);
                    strcpy(name[i],name[i+1]);
                    strcpy(name[i+1],temp);
                }
            }
    }

    for(i=0;i<n;i++)
    {   puts(name[i]);
    }
    return 0;
}
