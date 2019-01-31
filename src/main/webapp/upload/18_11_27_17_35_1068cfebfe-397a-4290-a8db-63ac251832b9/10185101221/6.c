#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int a;
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(a==arr[i]){
            for(int j=0;j<n;j++)
            {
                if(j!=i){
                printf("%d",arr[j]);
                if(a==arr[n-1])
                {
                    if(j<n-2)
                    printf(" ");
                }
                else if(j<n-1)
                    printf(" ");
                }

            }
            return 0;;
        }
    }

	printf("ERROR");
    return 0;
}
