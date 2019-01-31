#include <stdio.h>
int seek(int [],int,int);
int main()
{
    int n,i,st,p;
    scanf("%d",&n);
    int a[n+1],b[n-1];
    a[n]=0;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&st);
    p=seek(a,st,n);
    if(a[n]==1){
       for(i=0;i<p;i++)b[i]=a[i];
       for(i=p;i<n+1;i++)b[i]=a[i+1];
       for(i=0;i<n-1;i++){
        if(i==n-2)printf("%d",b[i]);
        else printf("%d ",b[i]);
      }
    }
    else printf("ERROR");
    return 0;
}
int seek(int a[],int st,int n)
{
    int i;
    for(i=0;i<n;i++){
        if(a[i]==st){
            a[n]=1;
            st=i;
            break;
        }
    }
    return st;
}
