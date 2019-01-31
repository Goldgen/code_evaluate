#include <stdio.h>
#include <stdlib.h>

void ScaniArr(int a[], int PMax);

int main()
{
    int maxItem;
    scanf("%d", &maxItem);
    int aSrc[maxItem];
    ScaniArr(aSrc, maxItem);

    int inPlatform = 0;
    int curPfLen = 1;
    int maxPfLen = 1;
    int i;
    for(i = 0; i < maxItem; i++){
        if(aSrc[i] == aSrc[i+1] && i != maxItem - 1){

            inPlatform = 1;
            curPfLen++;

        }else{

            if(inPlatform == 1){
                maxPfLen = curPfLen > maxPfLen ? curPfLen : maxPfLen ;
            }

            curPfLen = 1;
            inPlatform = 0;

        }
    }

    printf("%d", maxPfLen);

    return 0;
}

void ScaniArr(int a[], int PMax){
    int tempVar;
    int i;
    for(i = 0; i < PMax; i++){
        scanf("%d", &tempVar);
        a[i] = tempVar;
    }
}
