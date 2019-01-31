#include <stdio.h>
#include <math.h>

int main()
{
int n;
int i=0;
int m=0;
int k,j;
scanf("%d",&n);
int a[n];
n=n-1;
int b[n];
n=n+1;
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
scanf("%d",&k);
for(i=0;i<n;i++){
    if(a[i]==k)
        {
            for(j=0;j<i;j++)
                b[j]=a[j];
            for(j=i+1;j<n;j++)
                b[j-1]=a[j];
            break;
        }
    if(a[i]!=k)
        m++;
    }

if(m==n)
    printf("ERROR");
else
{
for(i=0;i<n-2;i++)
        printf("%d ",b[i]);
printf("%d",b[n-2]);
}
    return 0;
}

