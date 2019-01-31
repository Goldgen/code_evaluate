#include <stdio.h>
#include <string.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int i=0,e=0;
    for(i=0;i<m;i++)
    for(e=0;e<n;e++){
        scanf("%d",&a[i][e]);
    }
    for(e=0;e<n;e++)
    for(i=0;i<m;i++){
        if(i==m-1)printf("%d\n",a[i][e]);
        else printf("%d ",a[i][e]);
    }
    return 0;
}
