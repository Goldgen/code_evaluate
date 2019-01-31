/**********

input 5 double value from keyboard
store them in an array
compute 1/x
store them in another array
output them and their sum

**********/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAX = 5;

    double aSrc[MAX];
    double aDes[MAX];
    double sum = 0.0;

    int i;
    for(i = 0; i < MAX; i++){
        scanf("%lf", &aSrc[i]);
        aDes[i] = 1.0 / aSrc[i];
        sum += aDes[i];
    }

    for(i = 0; i < MAX; i++){
        printf("%.2lf", aDes[i]);
        if(i != MAX - 1){
            printf(" ");
        }
    }
    printf("\n%.6lf", sum);

    return 0;
}
