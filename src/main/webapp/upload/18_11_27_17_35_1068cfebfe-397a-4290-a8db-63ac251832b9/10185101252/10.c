#include <stdio.h>

#define swap(a, b)      {a = a^b; b = a^b; a = a^b;}

int BubbleSort(int* arr, int n){

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

}

int main(int argc, char* argv[]){

    int n;
    int arr[10001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    BubbleSort(arr, n);
    printf("%d", arr[0]);
    for(int i = 1; i < n; i++)
        printf(" %d", arr[i]);

    return 0;
}
