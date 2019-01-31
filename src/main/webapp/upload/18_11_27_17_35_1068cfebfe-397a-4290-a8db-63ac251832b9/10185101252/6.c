#include <stdio.h>
int n;
int array[10000];
int main(){

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    int num, index;
    scanf("%d", &num);
    for(index = 0; index < n; index++)
        if(array[index] == num)
            break;
    if(index == n)
        printf("ERROR");
    else{
        for(int i = index; i < n-1; i++)
            array[i] = array[i+1];
        printf("%d", array[0]);
        for(int i = 1; i < n-1; i++){
            printf(" %d", array[i]);
        }
    }

    return 0;
}
