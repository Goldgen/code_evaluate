#include <stdio.h>
#include <stdlib.h>

int LinearSrchPlus(int PaS[], int PMax, int PKey, int PaRst[]);
void ScaniArr(int a[], int PMax);

int main()
{
    int maxItem;
    scanf("%d", &maxItem);
    int aSrc[maxItem];
    ScaniArr(aSrc, maxItem);

    int key;
    scanf("%d", &key);
    int aSrchRst[maxItem];

    int flag = LinearSrchPlus(aSrc, maxItem, key, aSrchRst);
    if(flag){
        int isFirst = 1;
        int i;
        for(i = 0; i < maxItem; i++){
            if(isFirst && aSrchRst[i]){
                printf("%d", i);
                isFirst = 0;
            }else if(aSrchRst[i]){
                printf(" %d", i);
            }
        }
    }else{
        printf("ERROR");
    }

    return 0;
}


int LinearSrchPlus(int PaS[], int PMax, int PKey, int PaRst[]){
    int i;
    int hasKey = 0;
    for(i = 0; i < PMax; i++){
        if(PaS[i] == PKey){
            PaRst[i] = 1;
            hasKey = 1;
        }else{
            PaRst[i] = 0;
        }
    }
    return hasKey;
}

void ScaniArr(int a[], int PMax){
    int tempVar;
    int i;
    for(i = 0; i < PMax; i++){
        scanf("%d", &tempVar);
        a[i] = tempVar;
    }
}
