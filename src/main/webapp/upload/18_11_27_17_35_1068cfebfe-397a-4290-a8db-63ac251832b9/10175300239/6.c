#include <stdio.h>

int main()
{
    int n,i,j,b,in;
    in=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&b);
    for(i=0;i<n;i++){
        if(a[i]==b){
            for(j=i;j<n-1;j++)
                a[j]=a[j+1];
            in=1;
            break;
        }
    }
    if(in==1){
        for(i=0;i<n-2;i++)
            printf("%d ",a[i]);
        printf("%d",a[i]);
    }
    else
        printf("ERROR");
    return 0;
}
