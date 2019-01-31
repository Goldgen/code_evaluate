#include <stdio.h>
int main()
{
    int i,extra ,isdelete=0;
    int n;
    scanf("%d",&n);
    
    int a[n],start=1;
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&extra);
    for(i=1;i<=n;i++)
        if(a[i]==extra)
        {
            isdelete=i;
            break;
        }

    if(isdelete==0)
        printf("ERROR");
    else
    {
        if(isdelete==1)
            start++;
        printf("%d",a[start]);
        for(i=start+1;i<=n;i++)
            if(i!=isdelete)
                printf(" %d",a[i]);
    }
    return 0;
}
