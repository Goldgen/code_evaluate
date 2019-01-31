#include <stdio.h>
int main()
{
    int n,m;
    scanf("%u %u",&n,&m);
    int s[100],p[200];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n;i++)
    {
        p[i]=s[i];
    }
    for(int j=n;j<2*n;j++)
    {
        p[j]=s[j-n];
    }
    for(int t=n-m;t<2*n-m-1;t++)
    {
        printf("%d ",p[t]);
    }
    printf("%d",p[2*n-1-m]);
    return 0;
}
/*void reverse(int a[],int left,int right){
  for(int i=0;i<=(right-left)/2;i++){
  int tmp = a[left+i];
  a[left+i] = a[right-i];
  a[right-i] = tmp;
 }
}
int main()
{
 int a[100];
 unsigned int n,m;
 scanf("%u %u",&n,&m);
  int i;
 for(i=0;i<n;i++)
 {
	 scanf("%d",&a[i]);
 }
 reverse(a,0,n-1);
 reverse(a,0,m-1);
 reverse(a,m,n-1);
 for(i=0;i<n-1;i++)
  printf("%d ",a[i]);
 printf("%d",a[n-1]);
 return 0;
}*/