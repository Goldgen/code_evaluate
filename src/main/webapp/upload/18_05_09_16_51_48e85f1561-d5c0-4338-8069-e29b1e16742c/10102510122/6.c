#include <stdio.h>
#include <stdlib.h>

int main() {
    double score, min = 0, max = 0;
    scanf("%lf", &score);
    if (score >= 0) {
        max = score;
        min = score;
        while (scanf("%lf", &score) != 0 && score >= 0) {
            if (score > max)
                max = score;
            if (score < min)
                min = score;
        }
    }
    printf("max=%f,min=%f", max, min);
    return 0;
}