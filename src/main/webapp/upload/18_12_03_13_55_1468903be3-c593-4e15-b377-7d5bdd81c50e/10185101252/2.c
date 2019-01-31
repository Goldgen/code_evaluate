#include <stdio.h>
#include <string.h>
#define swap(a, b)  {a=a^b;b=a^b;a=a^b;}

int n;
char strs[20][50];
int indexs[20];

int bubble_sort(char strs[20][50], int n){
    for(int i = 0; i < n; i++)
        indexs[i] = i;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(strcmp(strs[indexs[j]], strs[indexs[j+1]]) < 0)
                swap(indexs[j], indexs[j+1]);
        }
    }
}

int main(){

    memset(indexs, 0, sizeof(indexs));
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++){
        gets(strs[i]);
        if('\n' == strs[i][strlen(strs[i])-1])
            strs[i][strlen(strs[i])-1] = '\0';
        if('\r' == strs[i][strlen(strs[i])-1])
            strs[i][strlen(strs[i])-1] = '\0';
    }
    bubble_sort(strs, n);
    for(int i = 0; i < n; i++){
        printf("%s\n", strs[indexs[i]]);
    }

    return 0;
}
