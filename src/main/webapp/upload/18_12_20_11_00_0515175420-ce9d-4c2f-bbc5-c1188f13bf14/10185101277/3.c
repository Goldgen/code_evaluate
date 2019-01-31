#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

int i;
int Min (int arr[ ], int n);

int Sum (int arr [ ], int n);

int main()
{
    int m;
    scanf("%d",&m);
    int str[m];
    for(i=0;i<m;i++){
    scanf("%d",&str[i]);
    }
    printf("%d",Min(str,m));
    printf(" ");
    printf("%d",Sum(str,m));
}

int Min (int arr[ ], int n)
{
    int *p=arr;
    for(i=1;i<n;i++){
        if(*p>arr[i])
            p=&arr[i];
    }
    return *p;
}

int Sum (int arr [ ], int n)
{
    int sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}