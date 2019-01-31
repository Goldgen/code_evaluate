#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    char alp[n][31];
    char temp[1];
    int i=0;
    for(i=0;i<n;++i)
    {
        scanf("%s",&alp[i][31]);
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            if(alp[i][0]<alp[i+1][0])
            {
                temp[0]=alp[i];
                alp[i][31]=alp[i+1][31];
                alp[i+1][31]=alp[i][31];
            }
        }
    }
    for(i=0;i<n;++i)
    {
        printf("%s",&alp[i]);
    }
    return 0;
}
