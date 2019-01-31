#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int x=0;x<m;x++)
        for(int y=0;y<n;y++)
             scanf("%d",&a[x][y]);
    for(int x=0;x<n;x++)
        for(int y=0;y<m;y++)
           {
            printf("%d",a[y][x]);
            if(y<m-1)
                printf(" ");
            if(y==m-1)
                printf("\n");
           }
           return 0;
}