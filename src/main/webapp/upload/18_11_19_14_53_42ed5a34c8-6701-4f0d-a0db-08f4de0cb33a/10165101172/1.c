
#include <stdio.h>
#include <stdlib.h>

int main(void){
    float* n = (float *)malloc(sizeof(float)*1000);
    int i;
    float sum = 0;
    for (i = 0;scanf("%f",&n[i]) && n[i] != -1;i++){
        sum += n[i];
        printf("%.2f\n",sum/(i+1));
    }
    free(n);
    return 0;
}
