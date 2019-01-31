#include <stdio.h>
#include <math.h>

int MutipleTable(int n);
int main(void) {
    int n;
    scanf("%d",&n);
    int i = 1;
    for(i=1;i<n;i++){
        MutipleTable(i);
        printf("\n");
    }
    MutipleTable(i);
    return 0;
}

int MutipleTable(int n){
    int i=1;
    for(i=1;i<=n;i++){
        if(i*n<10) printf(" %d * %d =  %d",i,n,i*n);
        else printf(" %d * %d = %d",i,n,i*n);
    }
    return 1;
}
