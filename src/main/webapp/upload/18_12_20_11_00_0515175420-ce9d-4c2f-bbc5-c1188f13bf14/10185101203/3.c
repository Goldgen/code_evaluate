#include <stdio.h>

int main()

{
    int n;
    scanf("%d",&n);
    int a[n];
    int i=0, c, d;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


for(c=1;c<=n-1;c++)

        for(i=0;i<=(n-1-1);i++)

        if(a[i]>a[i+1]){

        d=a[i];

        a[i]=a[i+1];

        a[i+1]=d;}
int e=0;
for(int i=0;i<=n-1;i++)
    e+=a[i];



printf("%d %d",a[0],e);




    return 0;

}