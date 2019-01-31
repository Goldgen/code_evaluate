#include <stdio.h>
int main()
{
int i,n;
scanf("%d",&n);
int arr[100];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int a,b,c;
scanf("%d%d",&a,&b);
for(i=n;i>a+1;i--){
arr[i]=arr[i-1];
}
c=arr[a];
arr[a+1]=c;
arr[a]=b;
printf("%d",arr[0]);
for(i=1;i<=n;i++)
printf(" %d",arr[i]);
return 0;
}



