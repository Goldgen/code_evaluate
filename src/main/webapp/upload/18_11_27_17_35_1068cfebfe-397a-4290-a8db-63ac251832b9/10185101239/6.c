#include <stdio.h>
int main()
{
int i,n,m;
int index=1;
scanf("%d",&n);
int arr[100];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int a,b;
scanf("%d",&b);
for(a=0;a<n;a++)
    {
     if(arr[a]==b)
    {
     index++;
    for(i=a;i<n-1;i++)
    arr[i]=arr[i+1];
    if(index==2)
        break;
    }
    }

if(index==1)
    printf("ERROR");
else
{
printf("%d",arr[0]);
for(m=1;m<n-1;m++)
printf(" %d",arr[m]);

}
return 0;
}

