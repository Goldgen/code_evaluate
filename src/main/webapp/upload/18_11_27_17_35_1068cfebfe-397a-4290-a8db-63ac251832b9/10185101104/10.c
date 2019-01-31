#include <stdio.h>

void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=n-1;i>0;i--)
        for(j=0;j<i;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble(a,n);
    printf("%d",a[0]);
    for(i=1;i<n;i++)
        printf(" %d",a[i]);
}
