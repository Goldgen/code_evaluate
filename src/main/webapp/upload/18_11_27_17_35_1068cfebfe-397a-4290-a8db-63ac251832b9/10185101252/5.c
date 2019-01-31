#include <stdio.h>
int n;
int array[10000];
int main(){

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    int index, num;
    scanf("%d%d", &index, &num);
    for(int i = n-1; i >= index; i--)
        array[i+1] = array[i];
    array[index] = num;
    printf("%d", array[0]);
    for(int i = 1; i < n+1; i++)
        printf(" %d", array[i]);


    return 0;
}
