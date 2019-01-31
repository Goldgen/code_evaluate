#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[111], n;
    int b[111];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        b[i]=1;
    }
    for(int i=n-2; i>=0; i--){
        if(a[i]==a[i+1]) b[i]=b[i+1]+1;
    }
    int max=b[0];
    for(int i=0; i<n-1; i++)
        if(b[i]>max) max=b[i];
    printf("%d", max);
    return 0;
}
