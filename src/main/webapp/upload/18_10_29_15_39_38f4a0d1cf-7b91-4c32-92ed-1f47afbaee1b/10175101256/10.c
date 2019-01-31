#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    int m=1;
    for(int c=0;c<n;c++){
        m*=2;
    }
    for(int i=0;i<m;i++){
        int b=i,j=0;
        printf("{");
        while(b!=0){
            a[j]=b%2;
            b/=2;
            if(a[j]==1){
                printf("%d",j);
            if(b!=0)
                printf(",");
                }
            j++;
        }
        printf("}");
        if(i!=m-1)
            printf("\n");
    }
    return 0;
}