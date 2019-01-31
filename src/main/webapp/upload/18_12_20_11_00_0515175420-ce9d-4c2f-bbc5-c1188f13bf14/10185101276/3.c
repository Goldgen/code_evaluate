#include <stdio.h>
int Min(int arr[],int n)
{
    int i;
    int min = arr[0];
    for (i = 0; i < n ; i++ ){
        if( arr[i] < min )min = arr[i];
    }
    return min;
}
int Sum( int arr[],int n)
{
    int i ;
    int sum = 0;
    for (i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d", Min ( arr, n ), Sum ( arr , n ));
    return 0;
}
