#include <stdio.h>
int seek(int [],int,int);
int main()
{
    int n,i,a=1,p=-1;
    scanf("%d",&n);
    int data[n+1];
    for(i=0;i<n;i++)scanf("%d",&data[i]);
    while(p<n-2){
        p=seek(data,n,p);
        if(data[n+1]>a)a=data[n+1];
    }
    printf("%d",a);
    return 0;
}
int seek(int data[],int n,int p)
{
    data[n+1]=1;
    int i;
    for(i=p+1;i<n-1;i++){
        if(data[i]==data[i+1]){
            data[n+1]++;
        }
        else break;
    }
    p=i;
    return p;
}
