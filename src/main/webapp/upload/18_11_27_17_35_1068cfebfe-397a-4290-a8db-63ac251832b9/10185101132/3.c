#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int MAXITEM = 5;
    const double eps = 1e-7;
    
    double amounts[MAXITEM];
    long long dollars[MAXITEM];
    long long cents[MAXITEM];

    int i;
    for(i = 0; i < MAXITEM; i++){
        scanf("%lf", &amounts[i]);
        amounts[i] += eps;
        
        dollars[i] = (long long)(amounts[i] * 100) / 100;
        cents[i] = (long long)((amounts[i] - dollars[i]) * 100);

        if(cents[i] <= 9)
            if(i == 0){
                printf("$%lld.0%lld", dollars[i], cents[i]);
            }else{
                printf(" $%lld.0%lld", dollars[i], cents[i]);
            }
        else
            if(i == 0){
                printf("$%lld.%lld", dollars[i], cents[i]);
            }else{
                printf(" $%lld.%lld", dollars[i], cents[i]);
            }
    }

    return 0;
}
