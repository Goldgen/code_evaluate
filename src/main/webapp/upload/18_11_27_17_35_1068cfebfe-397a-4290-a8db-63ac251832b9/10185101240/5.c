#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input[100];
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0)
    {
        printf("%d ",b);
        for(i=0;i<n-1;i++)
            printf("%d ",input[i]);
		printf("%d",input[i]);
    }
    else{
     for(i=0;i<a;i++)
    {
        printf("%d ",input[i]);
    }
    printf("%d",b);
    for(i=a;i<n;i++){
        printf(" %d",input[i]);}
    }
 return 0;
}