#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int data[n];
    int data1[n+1];
    for(int i=0;i<n;i++)
        scanf("%d",&data[i]);
    int a,b;
    scanf("%d %d",&a,&b);
    for(int j=0;j<n+1;j++)
    {
        if(a==j)
            data1[j]=b;
        else if(a>j)
            data1[j]=data[j];
        else
            data1[j]=data[j-1];
    }
    for(int j=0;j<n+1;j++)
 {
        printf("%d",data1[j]);
    if(j!=n)
        printf(" ");
}
    return 0;
}