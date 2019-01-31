#include <stdio.h>
int n;
int array[10000];
int indexs[10000];
int main(){

    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    int num;
    scanf("%d", &num);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(array[i] == num)
            indexs[cnt++] = i;
    }
    if(cnt == 0){
        printf("ERROR");
    }else{
        printf("%d", indexs[0]);
        for(int i = 1; i < cnt; i++)
            printf(" %d", indexs[i]);
    }

    return 0;
}
