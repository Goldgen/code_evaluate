#include <stdio.h>

int main()
{
    double data[5];
    double number[5];
    double s = 0;
    
    for (unsigned int i = 0; i < 5; i++) {
        scanf("%lf", &data[i]);
        number[i] = 1.0 / data[i];
        s += number[i];
    }
    
    for (unsigned int i = 0; i < 5; i++) {
        
        if (i < 4) {
            printf("%.2lf ", number[i]);
        }
        else printf("%.2lf", number[i]);
        
    }
    
    printf("\n%.6lf", s);
    
    return 0;
}
