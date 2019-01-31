#include<stdio.h>

int main()
{
    int arrSize = 100;
    int data1[arrSize];
    int data2[arrSize + 1];
    int location = 0;
    int number = 0;
    scanf("%d", &arrSize);
    for (unsigned int i = 0; i < arrSize; i++) {
        scanf("%d", &data1[i]);
    }
    scanf("%d %d", &location, &number);
    
    for (unsigned int i = location; i < arrSize; i++) {
        data2[i+1] = data1[i];
    }
    
    data2[location] = number;
    
    for (unsigned int i = 0; i < location; i++) {
        data2[i] = data1[i];
    }
    
    for (unsigned int i = 0; i < arrSize + 1; i++) {
        printf("%d", data2[i]);
        if (i < arrSize) printf(" ");
    }
    return 0;
}
