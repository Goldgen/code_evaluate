
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[10][30]={},min[30]={};
    int i,j,k,l,m,n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(ch[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            if(ch[k][0]<ch[k+1][0])
                for(m=0;m<30;m++)
                {
                    min[m]=ch[k][m];
                    ch[k][m]=ch[k+1][m];
                    ch[k+1][m]=min[m];
                }
        }
    }
    for(l=0;l<n;l++)
    {
        printf("%s\n",ch[l]);
    }
    //printf("%s\n",min);
    return 0;
}
