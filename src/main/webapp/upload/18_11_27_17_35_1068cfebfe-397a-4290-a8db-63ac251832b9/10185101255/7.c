#include<stdio.h>

int main()
{
    int arrSize = 100;
    int data[arrSize];
    int index[arrSize];
    int key = 0;
    int s = 0;
    
    scanf("%d", &arrSize);
    for (unsigned int i = 0; i < arrSize; i++) {
        scanf("%d", &data[i]);
    }
    scanf("%d", &key);
    
    for (unsigned int i = 0; i < arrSize; i++) {
        if (key == data[i]) {
            index[s] = i;
            s++;
        }
    }
    if (s == 0) {
        printf("ERROR");
    }
    else{
        for (unsigned int i = 0; i < s; i++) {
            printf("%d", index[i]);
            if (i < s-1) {
                printf(" ");
            }
        }
    }
    return 0;
}
