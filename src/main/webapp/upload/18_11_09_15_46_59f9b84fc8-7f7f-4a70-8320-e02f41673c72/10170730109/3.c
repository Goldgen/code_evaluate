#include <stdio.h>
#include <math.h>

int main(void) {
    char c='A';
    int i;
    scanf("%d",&i);
    int x=1;
    int q=1;
    for(x=1;x<i;x++,c++){
        for(q=1;q<=i-x;q++){
            printf(" ");
        }
        for(q=1;q<2*x;q++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(;x<2*i-1;x++,c++){
        for(q=1;q<=x-i;q++){
            printf(" ");
        }
        for(q=1;q<4*i-2*x;q++){
            printf("%c",c);
        }
        printf("\n");
    }
    for(q=1;q<=x-i;q++){
        printf(" ");
    }
    for(q=1;q<4*i-2*x;q++){
        printf("%c",c);
    }
    return 0;
}

