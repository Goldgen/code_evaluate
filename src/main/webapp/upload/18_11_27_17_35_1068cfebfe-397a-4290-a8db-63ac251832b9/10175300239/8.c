#include <stdio.h>

int main()
{
    int n,i,j,count,max;
    count=1;
    j=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
       b[i]=0;
    }
    for(i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            b[j]=count;
            j++;
            count=1;
            continue;
        }
        count++;
    }
    b[j]=count;
    max=b[0];
    for(i=1;i<n;i++){
        if(b[i]>max)
            max=b[i];
    }
    printf("%d",max);
    return 0;
}
