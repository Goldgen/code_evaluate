#include <stdio.h>
#include <stdlib.h>

int LinearSrch(int aS[], int max, int key);
void iArrPrint(int a[], int max);

int main()
{
    int maxItem = 0;
    scanf("%d", &maxItem);

    int aSrc[maxItem];
    int tempVar;
    int i;
    for(i = 0; i < maxItem; i++){
        scanf("%d", &tempVar);
        aSrc[i] = tempVar;
    }

    int del;
    scanf("%d", &del);
    int delIndx;
    delIndx = LinearSrch(aSrc, maxItem, del);

    if(delIndx + 1){
        int aDest[maxItem - 1];
        for(i = 0; i < maxItem - 1; i++){
            if(i < delIndx){
                aDest[i] = aSrc[i];
            }else{
                aDest[i] = aSrc[i+1];
            }
        }

        iArrPrint(aDest, maxItem - 1);
    }else{
        printf("ERROR");
    }

    return 0;
}

int LinearSrch(int aS[], int max, int key){
    int i;
    for(i = 0; i < max; i++){
        if(aS[i] == key)
            return i;
    }
    return -1;
}

void iArrPrint(int a[], int max){
    int i;
    for(i = 0; i < max; i++){
        printf("%d", a[i]);
        if(i != max - 1){
            printf(" ");
        }
    }
}
