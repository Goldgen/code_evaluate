#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,x,y,p,q;
    char a[20][300];
    scanf("%d\n",&n);
    for(i=0; i<n; i++)
        gets(a[i]);
    for(i=0; i<n; i++)
    {
        x=0;
        y=0;
       char b[20][300]= {0};
        char temp[300]= {0};
        for(j=0; a[i][j]!='\0'; j++)
        {

            if(a[i][j]!=' ')
            {
                b[x][y]=a[i][j];
                y++;
            }
            else
            {
                x++;
                y=0;
            }
        }
        for(p=0; p<=x; p++)
        {
            for(q=x; q>p; q--)
            {
                k=q;
                if(b[q-1][0]>'Z'||b[q-1][0]<'A')
                    k=q-1;
               if (b[q][0]>'Z'||b[q][0]<'A')
                    continue;
                if(strcmp(b[q],b[k-1])<0)
                {
                    strcpy(temp,b[k-1]);
                    strcpy(b[k-1],b[q]);
                    strcpy(b[q],temp);
                }
            }
        }
        printf("case #%d:\n",i);
        for(p=0; p<=x; p++)
        {
            if(p<x)
                printf("%s ",b[p]);
            else
                printf("%s\n",b[p]);
        }

    }
    return 0;
}