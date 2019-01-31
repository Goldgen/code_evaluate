#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    getchar();
    char a[n][81];
    char *temp[1];
    for(i=0;i<n;++i)
    {
        gets(a[i]);
        for(j=0;a[i][j]!='\0';++j)
        {
            if(a[i][j]>=48&&a[i][j]<=57)
                break;
            if(a[i][j]>a[i][j+1])
                {
                    temp[0]=a[i][j];
                    a[i][j]=a[i][j+1];
                    a[i][j+1]=temp[0];
                }

        }

    }
    for(i=0;i<n;++i)
    {
        printf("case #%d\n",i);
        printf("%s\n",a[i]);
    }
    return 0;
}