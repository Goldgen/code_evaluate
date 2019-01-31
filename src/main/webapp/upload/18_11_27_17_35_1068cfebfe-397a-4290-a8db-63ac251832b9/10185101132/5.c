#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxItem = 0;
    scanf("%d", &maxItem);

    double aSrc[maxItem];
    double tempVar;
    int i;
    for(i = 0; i < maxItem; i++){
        scanf("%lf", &tempVar);
        aSrc[i] = tempVar;
    }

    int invIndx;
    scanf("%d", &invIndx);
    double invItem;
    scanf("%lf", &invItem);

    double aDest[maxItem + 1];
    aDest[invIndx] = invItem;
    for(i = 0; i <= maxItem; i++){
        if(i == invIndx){
            continue;
        }else if(i < invIndx){
            aDest[i] = aSrc[i];
        }else{
            aDest[i] = aSrc[i-1];
        }
    }

    for(i = 0; i <= maxItem; i++){
        printf("%.0lf", aDest[i]);
        if(i != maxItem){
            printf(" ");
        }
    }

    return 0;
}
