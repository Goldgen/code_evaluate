#include <stdio.h>
#include <math.h>

int main(void) {
    int n=0;
    scanf("%d",&n);
    int i=2,j=2,p=0;
    printf("1\n");
    for(i=2;i<n;i++){
        printf("1");
        for(j=2;j<i;j++){
            p=p*(i-j+1)/(j-1);
            printf(" %d",p);
        }
        printf(" 1\n");
        p=1;
    }
    printf("1");
    for(j=2;j<i;j++){
        p=p*(i-j+1)/(j-1);
        printf(" %d",p);
    }
    printf(" 1");
    return 0;
}

