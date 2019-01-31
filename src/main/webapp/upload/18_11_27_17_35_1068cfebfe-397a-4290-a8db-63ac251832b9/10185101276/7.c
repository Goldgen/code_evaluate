#include <stdio.h>
int seek(int [],int,int,int);
int main()
{
    int n,i,st,p=-1;
    scanf("%d",&n);
    int a[n+1];
    a[n]=0;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&st);
    p=seek(a,st,n,p);
    i=0;
    while(a[n]==1){
        i++;
        printf("%d",p);
        p=seek(a,st,n,p);
        if(a[n]==1)printf(" ");
        else break;
    }
    if(i==0) printf("ERROR");
    return 0;
}
int seek(int a[],int st,int n,int p)
{
    a[n]=0;
    int i;
    for(i=p+1;i<n;i++){
        if(a[i]==st){
            a[n]=1;
            st=i;
            break;
        }
    }
    return st;
}
