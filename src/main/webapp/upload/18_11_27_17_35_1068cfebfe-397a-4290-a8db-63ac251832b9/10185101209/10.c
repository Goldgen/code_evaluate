#include<stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int num[n];

    for(int i=0; i<n; i++)
        scanf("%d",&num[i]);
    for(int i=0; i<(n-1)*(n-2)/2-1; i++)
        for(int j=1; j<n; j++)
            if(num[j-1]>num[j]){
                int a=0;
                a=num[j-1];
                num[j-1]=num[j];
                num[j]=a;
            }
    for(int i=0; i<n; i++){
        if(i!=0)
            printf(" ");
        printf("%d",num[i]);
    }
    return 0;
}