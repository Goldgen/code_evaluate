#include <stdio.h>
#include <stdlib.h>

int Min(int arr[], int n);
int Sum(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d %d", Min(arr, n), Sum(arr, n));
    return 0;
}

int Min(int arr[], int n){
    if(n > 0){
        int min = Min(arr, n - 1);
        return arr[n - 1] < min ? arr[n - 1] : min;
    }
	return arr[0];

}

int Sum(int arr[], int n){
	if(n > 0){
		return arr[n - 1] +  Sum(arr, n - 1);
	}
	return 0;
}
