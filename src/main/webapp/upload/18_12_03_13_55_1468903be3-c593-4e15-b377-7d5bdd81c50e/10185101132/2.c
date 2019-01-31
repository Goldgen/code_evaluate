#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char a[][32], int i, int j);

int main()
{
    int n;
    scanf("%d\n", &n);

    char leader[n][32];

    int i;
    for(i = 0; i < n; i++){
        gets(leader[i]);
    }

    int j;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1; j++){
            if(strcmp(leader[j], leader[j+1]) < 0){
                swap(leader, j, j+1);
            }
        }
    }

    for(i = 0; i < n; i++){
        puts(leader[i]);
    }

    return 0;
}

void swap(char a[][32], int i, int j){
    char *temp[32];
    strcpy(temp, a[i]);
    strcpy(a[i], a[j]);
    strcpy(a[j], temp);
}
