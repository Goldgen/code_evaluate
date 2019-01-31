#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;scanf("%d",&n);
    char a[n][100];
    for(int i=0;i<n;++i)
    {
        scanf("%s",a[i]);
        int j=0;
        for(int j=0;a[i][j]!='\0';++j)
        {
            if(a[i][j]!='Z')
                a[i][j]=a[i][j]+1;
            else 
                a[i][j]='A';
        }
    }
    for(int i=0;i<n;++i)
    {
        printf("case #%d: %s\n",i,a[i]);
    }

}