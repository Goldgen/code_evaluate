#include <stdio.h>
#include <string.h>
int max(int a,int b)
{
    if(a>b)b=a;
    return b;
}
int main()
{
    char a[10000],b[10000],c[10000];
    int i,as,bs;
    scanf("%s %s",a,b);
    as=strlen(a);
    bs=strlen(b);
    if(as>bs){
        for(i=0;i<as-bs;i++)c[i]='0';
        for(i=as-bs;i<as;i++)c[i]=b[i-as+bs];
        for(i=0;i<as;i++)b[i]=c[i];
    }
    else if(bs>as){
        for(i=0;i<bs-as;i++)c[i]='0';
        for(i=bs-as;i<bs;i++)c[i]=a[i+as-bs];
        for(i=0;i<bs;i++)a[i]=c[i];
    }//使其位数一一对应
    for(i=max(as,bs)-1;i>0;i--){
        a[i]=a[i]+b[i]-'0';
        if(a[i]>=':'){
            a[i-1]+=1;
            a[i]-=10;
        }
    }
    a[0]=a[0]+b[0]-'0';
    if(a[0]>=':'){
        a[0]-=10;
        printf("1");
    }//进行加法运算
    a[max(as,bs)]='\0';
    printf("%s",a);
    return 0;
}
