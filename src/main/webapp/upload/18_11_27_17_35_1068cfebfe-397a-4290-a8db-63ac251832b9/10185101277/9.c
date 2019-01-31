#include<stdio.h>
#include<string.h>
#define N 1000

int i;
void daoxu(char a[])
{
    int n=strlen(a);
    char a1[n];
    for(i=0;i<n;i++){
        a1[n-1-i]=a[i];
    }
    for(i=0;i<n;i++){
        a[i]=a1[i];
    }
}

int main()
{
    char a1[N]={'\0'},b1[N]={'\0'};
    int sum[N],a[N],b[N];
    int flag=0;
    gets(a1);
    gets(b1);
    daoxu(a1);
    daoxu(b1);
    int n=strlen(a1);
    int n2=strlen(b1);
    for(i=0;i<n;i++){
        a[i]=a1[i]-'0';
    }
    for(i=0;i<n2;i++){
        b[i]=b1[i]-'0';
    }
    if(n2>n)
        n=n2;
    for(i=0;i<n-1;i++){
        if(a[i]+b[i]+flag>9){
            sum[i]=a[i]+b[i]+flag-10;
            flag=1;
        }
        else{
            sum[i]=a[i]+b[i]+flag;
            flag=0;
        }
    }
    if(a[n-1]+b[n-1]+flag>9){
        sum[n-1]=a[n-1]+b[n-1]+flag-10;
        printf("1");
    }
    else{
        sum[n-1]=a[n-1]+b[n-1]+flag;
    }
    for(i=n-1;i>=0;i--){
        printf("%d",sum[i]);
    }
    return 0;
}
