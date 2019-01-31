#include <stdio.h>
#include <string.h>
int sum(int a[],int n)
{
    return (n>=1)?a[n-1]+sum(a,n-1):0;

}
int Min(int a[],int m)
{
    int min = a[0];
    for(int x=1;x<m;x++)
    {
        min = (min<a[x])?min:a[x];
    }
    return min;
}
int main()
{
   int t;
   scanf("%d",&t);
   int ar[t];
   for(int x=0;x<t;x++)
    scanf("%d",&ar[x]);
   printf("%d %d\n",Min(ar,t),sum(ar,t));
    return 0;
}