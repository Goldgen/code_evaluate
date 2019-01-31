#include<stdio.h>
void bubble(int a[],int n)
{
    int i,j,k;
    for(i=0;i<=(n -1) * n / 2;i++)
    {
        for(j=1;j<n;j++)
            if(a[j-1]>a[j])
        {
            k=a[j-1];
            a[j-1]=a[j];
            a[j]=k;
        }
    }
}
int main()
{
   int a[100],m,n;
   scanf("%d",&m);
   scanf("%d",&a[0]);
   for(n=1;n<m;n++)
        scanf(" %d",&a[n]);
    bubble(a,m);




    for(n=0;n<m;n++)
    {
        printf("%d",a[n]);
        if(n<m-1)
            printf(" ");
    }
}
