#include<stdio.h>
void rotate (int *p,int n,int m){
  int s1[n-m];
  int s2[m];
  for(int i=0;i<n-m;++i)
    s1[i]=p[i];
  for(int j=0;j<m;++j)
    s2[j]=p[n-m+j];
  for(int j=m;j<n;++j)
    s2[j]=s1[j-m];
  for(int i=0;i<n-1;++i)
    printf("%d ",s2[i]);
  printf("%d",s2[n-1]);
  return ;
}
int main()
{
    int n,m;
    scanf("%d %d\n",&n,&m);
    int p[n];
    for(int i=0;i<n;++i)
        scanf("%d",&p[i]);
    rotate(p,n,m);
    return 0;
}