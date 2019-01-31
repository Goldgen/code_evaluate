#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
	int num[100]={0};
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int m,addition;
    scanf("%d %d",&m,&addition);
    for(i=n;i>=m;i--){
        num[i]=num[i-1];
        if(i==m)
            num[i]=addition;
    }
    for(i=0;i<=n;i++){
        printf("%d",num[i]);
        if(i!=n)
            printf(" ");
    }
    return 0;
}