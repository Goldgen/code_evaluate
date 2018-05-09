#include <stdio.h>
#include <stdlib.h>

int main() {
    /*41.	求e值。 E约等于1/0!+1/1!+1/2!+⋯.+E(E<10的-6次方)

 */

    double e = 1, E = 1, i, j;
    for (i = 1;; i++) {
        for (j = 1; j <= i; j++) {
            E *= j;
        }
        e += 1 / E;
        if ((1 / E) < 1e-6)
            break;
    }

    printf("e=%lf", e);
    return 0;
}