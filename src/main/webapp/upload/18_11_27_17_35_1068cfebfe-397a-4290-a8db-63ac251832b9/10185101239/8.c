#include <stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[100];
int i, temp=1, Max=1;
scanf("%d",&arr[0]);
for(i=1; i<n; ++i)
{
scanf("%d",&arr[i]);
if(arr[i] == arr[i-1])
{ temp ++; }
else
{ temp=1; }
if(temp>Max)
Max=temp;
}
printf("%d",Max);
return 0;
}