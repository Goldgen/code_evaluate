#include <stdio.h>
#include <math.h>

int main(void) {
    int n=0,i=1;
    scanf("%d",&n);
    printf("{}");
    for(i=0;i<n+1;i++){
        printf("{%d}",i);
	}
    
    return 0;
}

