#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int A[a][b],AT[b][a];
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++) scanf("%d",&A[i][j]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++) AT[j][i]=A[i][j];
    }
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("%d",AT[i][j]);
            if(j<a-1) printf(" ");
        }
        if(i<b-1) printf("\n");
    }
}
