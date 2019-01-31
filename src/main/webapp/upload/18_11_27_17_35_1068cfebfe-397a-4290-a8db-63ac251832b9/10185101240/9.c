#include<stdio.h>
#include<string.h>
void main()
{
    char str1[1000],str2[1000];
    int a[1000]={0},b[1000]={0};
    int m,n,h,k,i;
   gets(str1);
   gets(str2);
   m=strlen(str1);
   n=strlen(str2);
  if(m<n) k=n;
  else
    k=m;
  h=k;
  for(i=0;i<m;k--,i++)
  {
      a[k]=str1[m-1-i]-'0';
  }
  for(k=h,i=0;i<n;k--,i++)
  {
      b[k]=str2[n-1-i]-'0';
  }
  for(i=h;i>=0;i--)
  {
      a[i]+=b[i];
      if(a[i]>=10)
      {
          a[i]-=10;
          a[i-1]++;
      }
  }
  if(a[0]==0)
  {
	  for(i=1;i<=h;i++)
    {
        printf("%d",a[i]);
    }   
  }
  else{
    for(i=0;i<=h;i++)
        printf("%d",a[i]);
  }
  return 0;
}