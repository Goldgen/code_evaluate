#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,o=0,digit;
    scanf("%d",&n);
    int a[n];
    int base[100];
    for(int i=0;i<100;++i)
        base[i]=1;
    for(int i=0;i<n;++i)
        scanf("%d",&a[i]);
    for(int i=0;i<n;++i){
        if(a[i]==a[i+1]){
            base[o]++;
            }
        else if(a[i]!=a[i+1])
            o++;}
    digit=1;
    for(int i=0;i<n;++i){
        if(base[i]>=digit)
            digit=base[i];
    }
    printf("%d",digit);
    return 0;
}
