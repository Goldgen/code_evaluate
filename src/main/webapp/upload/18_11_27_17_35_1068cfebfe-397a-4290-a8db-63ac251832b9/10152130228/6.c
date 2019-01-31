#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[111], n;
    int k;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &k);
    for(int i=0; i<n; i++)
        if(a[i]==k){
            for(int j=i; j<n-1; j++)
                a[j]=a[j+1];
            a[n-1]=' ';
            break;
        }
    if(a[n-1]==' '){
        for(int i=0; i<n-2; i++)
            printf("%d ", a[i]);
        printf("%d", a[n-2]);
    }
    else printf("ERROR");
    return 0;
}
