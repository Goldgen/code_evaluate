#include <stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include <time.h>
#include<math.h>
#include<string.h>



int main( ){
    int m,n;
    scanf("%d %d",&m,&n);
    int M[m][n];
    for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
        scanf("%d",&M[i][j]);
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            printf("%d",M[i][j]);
            if(i<m-1)printf(" ");
            else printf("\n");
        }
    }
    return 0;
}


