#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m];
    for(int x=0;x<m;x++)
        scanf("%d",&a[x]);
    int flag = 1;
    for(int i=m-n;i<m;i++)
    {
        if(flag)
            flag = 0;
        else
            printf(" ");
        printf("%d",a[i]);
    }
      for(int i=0;i<m-n;i++)
    {
        if(flag)
            flag = 0;
        else
            printf(" ");
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}