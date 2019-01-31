#include <stdio.h>
#include <string.h>
long long int toten(char a[]){
    long long int la=strlen(a)-1;
    long long int b=0,c=1,i;
    for(i=0;i<=la;i++){
        if(a[i]>=48&&a[i]<=57)a[i]-=48;
        else if(a[i]>=65&&a[i]<=70)a[i]-=55;
        else a[i]-=87;
    }
    for(i=la;i>=0;i--){
        b+=a[i]*c;
        c*=16;
    }
    return b;
}
int main()
{
    char a[10];
    scanf("%s",a);
    printf("%lld",toten(a));
    return 0;
}
