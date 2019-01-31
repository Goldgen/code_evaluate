#include <stdio.h>
#include <math.h>

int main()
{
int n;
int i=0;
int m=0;
int g=0;
int k;
scanf("%d",&n);
int a[n];
int b[n];
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
scanf("%d",&k);
for(i=0;i<n;i++){
    if(a[i]==k)
        {
        b[g]=i;
        g++;
        }
    if(a[i]!=k)
        m++;
    }

if(m==n)
    printf("ERROR");
else
{
for(i=0;i<g-1;i++)
        printf("%d ",b[i]);
printf("%d",b[g-1]);
}
    return 0;
}

