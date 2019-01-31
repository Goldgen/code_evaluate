#include <stdio.h>

int main() {
    char alice, bob;
    scanf("%c %c", &alice, &bob);
    if(alice == bob) {
        printf("Tie");
    } else if((alice == 'S' && bob == 'C') ||
              (alice == 'R' && bob == 'S') ||
              (alice == 'C' && bob == 'R')) {
        printf("Alice");
    } else {
        printf("Bob");
    }
    return 0;
}
