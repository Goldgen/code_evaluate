#include <stdio.h>

void bubbleSort(int a[], int n);

int main()
{
    int n;
    scanf("%d",&n);
    int num[n]; int i;
    for (i=0; i<n; i++){
        scanf("%d",&num[i]);
    }
    bubbleSort(num, n);
    for (i=0; i<n; i++)
    {
        printf("%d", num[i]);
        if (i<n-1) printf(" ");
    }
	return 0;
}

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    for (j=0; j<n-1; j++)
        for (i=0; i<n-1-j; i++)
        {
            if(a[i]>a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
	
	return;
}
