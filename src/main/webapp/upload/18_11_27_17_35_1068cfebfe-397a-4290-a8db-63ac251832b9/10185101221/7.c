#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int a;
    int num=0;
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(a==arr[i]){
            if(num==0)
               printf("%d",i);
            else
                printf(" %d",i);
            num++;
        }
    }
    if(num==0)
	printf("ERROR");
    return 0;
}
