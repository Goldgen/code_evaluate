#include <stdio.h>
int main()
{
    int n,key,i,j=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++)
        if(a[i]==key)
            b[j++]=i;
    if(j==0)
        printf("ERROR");
    else
    {
        printf("%d",b[0]);
        for(i=1;i<j;i++)
            printf(" %d",b[i]);
    }
    return 0;
}
