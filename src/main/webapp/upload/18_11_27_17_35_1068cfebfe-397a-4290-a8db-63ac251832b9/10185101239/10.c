#include <stdio.h>
int main()
{
int i,n;

scanf("%d",&n);
int arr[100];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
	int  j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
        {
            if(arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }

    printf("%d", arr[0]);



	for (i = 1; i < n; i++)
    {
        printf(" %d", arr[i]);
    }
}
